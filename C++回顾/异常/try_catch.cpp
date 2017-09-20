#include<iostream>
using namespace std;
int abc(int a,int b,int c){
    if(a<0&&b<0&&c<0){
        throw 1;
    }
    if(a==0&&b==0&&c==0){
        throw 2;
    }
    return a+b*c;
}
int main()
{
    try{
        cout<<abc(-1,-2,-3)<<endl;
    }
    catch(int e){
        cout<<"An exception has been thrown"<<endl;
        cout<<e<<endl;
    }
    return 0;
}
