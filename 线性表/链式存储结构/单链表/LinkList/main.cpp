#include <iostream>
#include "LinkList.h"
using namespace std;

int main()
{
    int a[7]={1,2,3,4,5,6,7};
    LinkList<int>list(a,7);
    cout<<"�������Ԫ�أ�";
    list.PrintList();
    int b=list.Delete(4);
    cout<<"ɾ����4��Ԫ��:"<<b<<endl;
    cout<<"ɾ���������Ԫ�أ�";
    list.PrintList();
    list.Insert(4,4);
    cout<<"�ڵ�4λǰ����4"<<endl;
    cout<<"ɾ���������Ԫ�أ�";
    list.PrintList();
    cout<<"Ԫ��4���ڵ�λ��:"<<list.Locate(4)<<endl;
    return 0;
}
