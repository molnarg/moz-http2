/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

var http2 = require('../node-http2');
var fs = require('fs');

function handleRequest(req, res) {
  res.end('Hello World!');
}

// Set up the SSL certs for our server
var options = {
  key: fs.readFileSync(__dirname + '/../moz-spdy/spdy-key.pem'),
  cert: fs.readFileSync(__dirname + '/../moz-spdy/spdy-cert.pem'),
  ca: fs.readFileSync(__dirname + '/../moz-spdy/spdy-ca.pem')
};

http2.createServer(options, handleRequest).listen(4444);
console.log('HTTP2 server listening on port 4444');
