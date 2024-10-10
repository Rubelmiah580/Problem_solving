#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,seq;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            seq = arr[i]/2;
            cout<<seq<<" ";
        }
        else
        break;
        
    }
    if(arr[i]%2!=0)
    {
        cout<<"-1";
    }
    cout<<endl;
    }
}