#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[3];
int dis1,dis2;
for(int i =0;i<3;i++)
{
    cin>>arr[i];
}
sort(arr,arr+3);

 dis1=arr[1]-arr[0]; 
 dis2=arr[2]-arr[1];
 cout<<dis1+dis2<<endl;

    return 0;
}