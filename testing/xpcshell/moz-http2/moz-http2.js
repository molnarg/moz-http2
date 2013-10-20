/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

var http2 = require('../node-http2');
var fs = require('fs');
var url = require('url');

function getHttpContent(path) {
  var content = '<!doctype html>' +
    '<html>' +
    '<head><title>HOORAY!</title></head>' +
    '<body>You Win! (by requesting' + path + ')</body>' +
    '</html>';
  return content;
}

function handleRequest(req, res) {
  var u = url.parse(req.url);
  var content = getHttpContent(u.pathname);

  if (req.stream) {
    res.setHeader('X-Connection-Http2', 'yes');
    res.setHeader('X-Spdy-StreamId', '' + req.stream.id);
  } else {
    res.setHeader('X-Connection-Http2', 'no');
  }

  res.setHeader('Content-Type', 'text/html');
  res.writeHead(200);
  res.end(content);
}

// Set up the SSL certs for our server
var options = {
  key: fs.readFileSync(__dirname + '/../moz-spdy/spdy-key.pem'),
  cert: fs.readFileSync(__dirname + '/../moz-spdy/spdy-cert.pem'),
  ca: fs.readFileSync(__dirname + '/../moz-spdy/spdy-ca.pem')
};

var server = http2.createServer(options, handleRequest);
server.on('connection', function(socket) {
  socket.on('error', function() {
    // Ignoring SSL socket errors, since they usually represent a connection that was tore down
    // by the browser because of an untrusted certificate. And this happens at least once, when
    // the first test case if done.
  });
});
server.listen(4444);
console.log('HTTP2 server listening on port 4444');
