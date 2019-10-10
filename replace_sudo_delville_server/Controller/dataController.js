const router = require('express').Router();

router.get('/', (req, res) => {
    console.log(req.query);
    return res.status(204).end();
});

module.exports = router;