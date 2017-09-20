异常
-----
抛出异常：<br/>
throw "all parameters should be > 0" //异常类型为：char*<br/>
处理异常：<br/>
使用try-catch块搭配使用:<br/>
try(){}<br/>
catch(){}<br/>
异常捕捉类型：<br/>
catch(char* e){} //char*<br/>
catch(bad_alloc e){} //内存空间分配错误<br/>
catch(...){} //捕捉所有异常<br/>
