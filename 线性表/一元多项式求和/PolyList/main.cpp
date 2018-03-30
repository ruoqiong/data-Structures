#include <iostream>
#include "PolyList.h"
using namespace std;

int main()
{
    element ea[]={element(1,0),element(2.3,2),element(3,4)};
    element eb[]={element(1,1),element(-2.3,2),element(3,4),element(5,10)};
    PolyList a(ea,3),b(eb,4);
    a.Add(b);
    a.PrintList();
    return 0;
}
