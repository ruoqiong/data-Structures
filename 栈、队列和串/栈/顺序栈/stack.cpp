#include<iostream>
using namespace std;

const int StackSize = 1024;
template <class T>
class SeqStack
{
public:
  SeqStack(){top = -1;}
  SeqStack(const T a[],int n);
  void PrintStack();
  void Push(T x);
  T Pop();
  T GetTop();
  bool Empty();
private:
  T data[StackSize];
  int top;
};

template <class T>
SeqStack<T>::SeqStack(const T a[],int n)
{
  if(n>StackSize) throw"数组长度大于栈的最大高度";
  for(int i=0;i<n;i++)
  {
    data[i]=a[i];
  }
  top=n-1;
}

template <class T>
void SeqStack<T>::PrintStack()
{
  for(int i=0;i<=top;i++)
  {
    cout<<data[i]<<" ";
  }
  cout<<endl;
}

template <class T>
void SeqStack<T>::Push(T x)
{
  if(top >= StackSize-1) throw "上溢";
  top++;
  data[top]=x;
}

template<class T>
T SeqStack<T>::Pop()
{
  if(Empty()) throw"下溢";
  top--;
  return data[top+1];
}

template<class T>
T SeqStack<T>::GetTop()
{
  if(Empty()) throw"下溢";
  return data[top];
}
template<class T>
bool SeqStack<T>::Empty()
{
  if(top==-1) return true;
  if(top>=0) return false;
}


int main()
{
  int a[7]={1,2,3,4,5,6,7};
  SeqStack<int> stack(a,7);
  cout<<"初始栈数据：";
  stack.PrintStack();
  cout<<"栈顶元素：";
  cout<<stack.GetTop()<<endl;
  stack.Push(8);
  cout<<"入栈后的数据：";
  stack.PrintStack();
  int x=stack.Pop();  
  cout<<"出栈后的数据：";
  stack.PrintStack();
  cout<<"出栈的值："<<x<<endl;
  return 0;
}
