const http=require("http");
const fs=require("fs");
const url=require("url");

const myServer=http.createServer((req,res)=>{
    if(req.url==='/favicon.ico')return res.end();
    const log=`${Date.now()}:${req.method}: ${req.url}: Request Recieved\n`;
    const myUrl=url.parse(req.url,true);
    // console.log(myUrl);
    fs.appendFile("log.txt",log,(err,data)=>{
        switch(myUrl.pathname){
            case"/":
            if(req.method==="GET")

            res.end("<h1>Hello This is Home Page</h1>");
            break;
            case"/about":
            const username=myUrl.query.myname;
            res.end(`<h1>Hi, ${username}</h1>`);
            break;
            case"/search":
            const search=myUrl.query.search_query;
            res.end(`Here are you result for`+search);
            case"/signup":
            if(req.method==="GET")
                res.end("This is signup form");
            else if(req.method==="POST")
                res.end("Success");
            default:
                res.end("<h1>404 Page not found</h1>");
        }
    })
})
myServer.listen(2000,()=>
    console.log("Server running")
);