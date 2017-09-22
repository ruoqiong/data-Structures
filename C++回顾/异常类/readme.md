## 异常类
```cpp
class illegalParameterValue
{
public:
    illegalParameterValue():
        message("Illegal parameter value"){}
    illegalParameterValue(char* theMessage)
    {
        message=theMessage;
    }
    void outputMessage(){cout<<message<<endl;}
private:
    string message;
};
```