var express = require('express');
var app = express();
var path = require('path');
var port = 3000||process.env.port;
app.use(express.static('public'))

app.listen(port,function(){
    console.log(port);
})