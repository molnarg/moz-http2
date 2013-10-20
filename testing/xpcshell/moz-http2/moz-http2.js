/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

var http2 = require('../node-http2');
var fs = require('fs');
var url = require('url');
var crypto = require('crypto');

function getHttpContent(path) {
  var content = '<!doctype html>' +
                '<html>' +
                '<head><title>HOORAY!</title></head>' +
                '<body>You Win! (by requesting' + path + ')</body>' +
                '</html>';
  return content;
}

function getHugeContent(size) {
  var content = '';

  for (var i = 0; i < size; i++) {
    content += '0';
  }

  return content;
}

var post_hash = null;
function receivePostData(chunk) {
  post_hash.update(chunk.toString());
}

function finishPost(res, content) {
  var md5 = post_hash.digest('hex');
  res.setHeader('X-Calculated-MD5', md5);
  res.writeHead(200);
  res.end(content);
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

  if (u.pathname == '/exit') {
    res.setHeader('Content-Type', 'text/plain');
    res.writeHead(200);
    res.end('ok');
    process.exit();
  } else if (u.pathname == '/multiplex1' && req.streamID) {
    res.setHeader('Content-Type', 'text/plain');
    res.writeHead(200);
    m.mp1res = res;
    m.checkReady();
    return;
  } else if (u.pathname == '/multiplex2' && req.streamID) {
    res.setHeader('Content-Type', 'text/plain');
    res.writeHead(200);
    m.mp2res = res;
    m.checkReady();
    return;
  } else if (u.pathname == "/header") {
    var val = req.headers["x-test-header"];
    if (val) {
      res.setHeader("X-Received-Test-Header", val);
    }
  } else if (u.pathname == "/push") {
    res.push('/push.js',
      { 'content-type': 'application/javascript',
        'pushed' : 'yes',
        'content-length' : 11,
        'X-Connection-Spdy': 'yes'},
      function(err, stream) {
        if (err) return;
        stream.end('// comments');
      });
    content = '<head> <script src="push.js"/></head>body text';
  } else if (u.pathname == "/push2") {
    res.push('/push2.js',
      { 'content-type': 'application/javascript',
        'pushed' : 'yes',
        // no content-length
        'X-Connection-Spdy': 'yes'},
      function(err, stream) {
        if (err) return;
        stream.end('// comments');
      });
    content = '<head> <script src="push2.js"/></head>body text';
  } else if (u.pathname == "/big") {
    content = getHugeContent(128 * 1024);
    var hash = crypto.createHash('md5');
    hash.update(content);
    var md5 = hash.digest('hex');
    res.setHeader("X-Expected-MD5", md5);
  } else if (u.pathname == "/post") {
    if (req.method != "POST") {
      res.writeHead(405);
      res.end('Unexpected method: ' + req.method);
      return;
    }

    post_hash = crypto.createHash('md5');
    req.on('data', receivePostData);
    req.on('end', function () { finishPost(res, content); });

    return;
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
