#include<iostream>
using namespace std;

template<class T>
struct Node
{
    T data;
    struct Node<T> * next;
};

template<class T>
class LinkList
{
public:
    LinkList(){front=new Node<T>;front->next=NULL;length=0;}
    LinkList(T a[],int n);
    ~LinkList();
    void PrintList();
    int Getlength(){return length;}
    Node<T> * Get(int i);
    int Locate(T x);
    void Insert(int i,T x);
    T Delete(int i);
private:
    Node<T>*front;
    int length;
};

class ComplexNumber
{
public:
    ComplexNumber(){a=0;b=0;}
    ComplexNumber(double a1,double b1){a=a1;b=b1;}
    bool operator ==(ComplexNumber & cn)
    {
        return (a==cn.a && b==cn.b);
    }
private:
    double a;
    double b;
};

//头插法
template<class T>
LinkList<T>::LinkList(T a[],int n)
{
    length=n;
    front =new Node<T>;
    front->next=NULL;
    for(int i=n-1;i>=0;i--)
    {
        Node<T> * s=new Node<T>;
        s->data=a[i];
        s->next=front->next;
        front->next=s;
    }
}

//尾插法
//template<class T>
//LinkList<T>::LinkList(T a[],int n)
//{
//    front=new Node<T>;
//    Node<T> *r=front;
//    for(int i=0;i<n;i++)
//    {
//        Node<T> * s=new Node<T>;
//        s->data=a[i];
//        r->next=s;
//        r=s;
//    }
//    r->next=NULL;
//}

template<class T>
LinkList<T>::~LinkList()
{
    Node<T> * p=front;
    while(p)
    {
        front=p;
        p=p->next;
        delete front;
    }
}
//按值查找
template<class T>
Node<T> * LinkList<T>::Get(int i)
{
    Node<T>*p=front->next;
    int j=1;
    while(p && j!=i)
    {
        p=p->next;
        j++;
    }
    return p;
}

//按值查找
template<class T>
int LinkList<T>::Locate(T x)
{
    Node<T> * p=front->next;
    int j=1;
    while(p)
    {
        if(p->data==x) return j;
        p=p->next;
        j++;
    }
    return -1;
}

template<class T>
void LinkList<T>::Insert(int i,T x)
{
    Node<T> * p=front;
    if(i!=1)p=Get(i-1);
    if(p){
        Node<T>* s=new Node<T>;
        s->data=x;
        s->next=p->next;
        p->next=s;
        length=length+1;
    }
    else throw "插入位置错误";
}

template<class T>
T LinkList<T>::Delete(int i)
{
    Node<T> *p=front;
    if(i!=1)p=Get(i-1);
    if(!p && ! p->next) throw "位置错误";
    Node<T> * q=p->next;
    p->next=q->next;
    T x=q->data;
    delete q;
    length=length-1;
    return x;
}

template<class T>
void LinkList<T>::PrintList()
{
    Node<T> * p=front->next;
    for(int i=0;i<length;i++)
    {
        cout<<p->data;
        p=p->next;
        if(p)
            cout<<"->";
    }
    cout<<endl;
}
