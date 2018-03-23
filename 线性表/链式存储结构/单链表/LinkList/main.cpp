#include <iostream>
#include "LinkList.h"
using namespace std;

int main()
{
    int a[7]={1,2,3,4,5,6,7};
    LinkList<int>list(a,7);
    cout<<"单链表的元素：";
    list.PrintList();
    int b=list.Delete(4);
    cout<<"删除第4个元素:"<<b<<endl;
    cout<<"删除后单链表的元素：";
    list.PrintList();
    list.Insert(4,4);
    cout<<"在第4位前插入4"<<endl;
    cout<<"删除后单链表的元素：";
    list.PrintList();
    cout<<"元素4所在的位置:"<<list.Locate(4)<<endl;
    return 0;
}
