const router = require('express').Router();

const DataController = require('./dataController');

router.use('/data', DataController);

module.exports = router;