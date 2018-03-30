#include<iostream>
#include<vector>
using namespace std;
using std::vector;
int main()
{
 vector<int> ivec(5,2);
  for(int i=0;i<ivec.size();i++)
  {
    cout<<ivec[i];
  }
  cout<<endl;
  ivec.push_back(3);
  ivec.insert(ivec.begin(),1);
  for(vector<int>::iterator it = ivec.begin();it!=ivec.end();it++)
    cout<<*it;
  cout<<endl;
  return 0;
}
