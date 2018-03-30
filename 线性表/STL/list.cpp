#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main()
{
  vector<int>ivec(3,4);
  list<int>ilist(5,2);
  ilist.push_back(1);
  ilist.insert(ilist.begin(),7);
  ilist.insert(ilist.end(),ivec.begin(),ivec.end());
  for(list<int>::iterator it=ilist.begin();it!=ilist.end();it++)
    cout<<*it;
  cout<<endl;
  ilist.sort();
  for(list<int>::iterator it=ilist.begin();it!=ilist.end();it++)
    cout<<*it;
  cout<<endl;
  return 0;
}
