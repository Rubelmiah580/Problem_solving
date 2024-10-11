#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr1[5],arr2[5],sum=0;
    for(int i =0;i<5;i++)
    {
        cin>>arr1[i];
    }
    for(int i =0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            sum+=arr1[j];
        }
        sum-=arr1[i];
        arr2[i]=sum;
        sum=0;
    }
    sort(arr2,arr2+5);
    cout<<arr2[0]<<" "<<arr2[4]<<endl;
}