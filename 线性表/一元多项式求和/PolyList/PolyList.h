#include <iostream>
#include <math.h>
#include "LinkList.h"

using namespace std;

struct element
{
    double coef;
    int exp;
    element(double c=0,int e=0):coef(c),exp(e){}
};

class PolyList:public LinkList <element>
{
public:
    PolyList(element data[],int n):LinkList(data,n){}
    void Add(PolyList & B);
    void PrintList()
    {
        Node<element> * p=GetFirst()->next;
        while(p){
            cout<<"("<<p->data.coef<<","<<p->data.exp<<")";
            p=p->next;
        }
        cout<<endl;
    }
};

void PolyList::Add(PolyList & B)
{
    Node <element> * p_prior = GetFirst();
    Node <element> * p=p_prior->next;
    Node <element> * q=B.GetFirst()->next;
    while(p && q)
    {
        if(p->data.exp < q->data.exp){
            p_prior=p;
            p=p->next;
        }
        else if(p->data.exp > q->data.exp){
            p_prior->next=q;
            p_prior=q;
            q=q->next;
            p_prior->next=p;
        }
        else{
            p->data.coef+=q->data.coef;
            if (fabs(p->data.coef)<1e-7){
                p_prior->next=p->next;
                delete p;
                p=p_prior->next;
            }
            else{
                p_prior=p;
                p=p_prior->next;
            }
            Node<element> * temp=q;
            q=q->next;
            delete temp;
        }
    }
    if(q) p_prior->next=q;
    B.GetFirst()->next=NULL;
}


