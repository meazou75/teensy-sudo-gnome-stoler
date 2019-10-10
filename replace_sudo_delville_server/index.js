const express = require('express');
const app = express();
const bodyParser = require('body-parser');
const http = require('http');

const Controllers = require('./Controller');

// Server
const httpServer = http.createServer(app);

// Usings
app.use(bodyParser.json());

// Listen
httpServer.listen(8888, () =>
    console.log(`> Ready on http://0.0.0.0:${8888}`)
);

// Routes
app.use('/', Controllers);
app.all('*', (_, res) => res.status(404).end());