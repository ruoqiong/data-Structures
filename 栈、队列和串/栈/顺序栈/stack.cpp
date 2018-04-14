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
  if(n>StackSize) throw"���鳤�ȴ���ջ�����߶�";
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
  if(top >= StackSize-1) throw "����";
  top++;
  data[top]=x;
}

template<class T>
T SeqStack<T>::Pop()
{
  if(Empty()) throw"����";
  top--;
  return data[top+1];
}

template<class T>
T SeqStack<T>::GetTop()
{
  if(Empty()) throw"����";
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
  cout<<"��ʼջ���ݣ�";
  stack.PrintStack();
  cout<<"ջ��Ԫ�أ�";
  cout<<stack.GetTop()<<endl;
  stack.Push(8);
  cout<<"��ջ������ݣ�";
  stack.PrintStack();
  int x=stack.Pop();  
  cout<<"��ջ������ݣ�";
  stack.PrintStack();
  cout<<"��ջ��ֵ��"<<x<<endl;
  return 0;
}
