#include<iostream>
#include "SeqList.h"
using namespace std;

int main()
{
  int a[7]={1,2,3,4,5,6,7};
  SeqList<int>list(a,7);
  list.PrintList();
  list.Insert(1,0);
  list.PrintList();
  int x=list.Delete(8);
  cout<<"ɾ��Ԫ�أ�"<<x<<endl;
  list.PrintList();
  int p=list.Locate(4);
  cout<<"Ԫ��4��λ�ã�"<<p<<endl;
  return 0;
}
