#include<iostream>
using namespace std;
const int MAXSIZE=1000;
template<class T>
class SeqList
{
public:
  SeqList(){length=0;}
  SeqList(const T a[],int n);
  int GetLength(){return length;}
  void PrintList();
  void Insert(int i,T x);
  T Delete(int i);
  T Get(int i);
  int Locate(T x);
private:
  T data[MAXSIZE];
  int length;
};

template<class T>
SeqList<T>::SeqList(const T a[],int n)
{
  if(n>MAXSIZE) throw "���鳤�ȳ���˳������󳤶�";
  for(int i=0;i<n;i++)
    data[i]=a[i];
  length=n;
}

template<class T>
void SeqList<T>::PrintList()
{
  cout<<"��������α������Ա��еĸ�������Ԫ�أ�"<<endl;
  for(int i=0;i<length;i++)
    cout<<data[i]<<" ";
  cout<<endl;
}

template<class T>
void SeqList<T>::Insert(int i,T x)
{
  if(length>=MAXSIZE) throw "�����쳣";
  if(i<1||i>length+1) throw "λ���쳣";
  for(int j=length;j>=i;j--)
    data[j]=data[j-1];
  data[i-1]=x;
  length++;
}

template<class T>
T SeqList<T>::Delete(int i)
{
  if(0==length) throw "�����쳣";
  if(i<1||i>length) throw "λ���쳣";
  T x=data[i-1];
  for(int j=i;j<length;j++)
    data[j-1]=data[j];
  length--;
  return x;
}

template<class T>
T SeqList<T>::Get(int i)
{
  if(i<1||i>length) throw "����λ�÷Ƿ�";
  return data[i-1];
}

template<class T>
int SeqList<T>::Locate(const T x)
{
  for(int i=0;i<length;i++)
    if(x==data[i]) return i+1;
  return 0;
}


