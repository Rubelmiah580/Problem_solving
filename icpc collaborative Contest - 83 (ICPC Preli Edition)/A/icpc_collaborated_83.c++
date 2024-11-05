#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int a,b,sum,sub,mult;
cin>>a>>b;
sum =a+b;
sub=a-b;
mult = a*b;
cout<<max({sum,sub,mult})<<endl;

    return 0;
}