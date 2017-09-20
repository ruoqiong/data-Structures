##抛出异常：
'''C++
throw "all parameters should be > 0" //异常类型为：char*<br/>
'''
##处理异常：<br/>
使用try-catch块搭配使用:<br/>
'''C++
try(){}
catch(){}
'''
异常捕捉类型：<br/>
'''C++
catch(char* e){} //char*
catch(bad_alloc e){} //内存空间分配错误
catch(...){} //捕捉所有异常
'''
