异常
====
抛出异常：
----
···cpp
throw "all parameters should be > 0" //异常类型为：char*<br/>
···
处理异常：
----
使用try-catch块搭配使用:<br/>
···cpp
try(){}
catch(){}
···
异常捕捉类型：<br/>
···cpp
catch(char* e){} //char*
catch(bad_alloc e){} //内存空间分配错误
catch(...){} //捕捉所有异常
···
