#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n][n];
for(int i =0;i<n;i++)
{
    for(int j =0;j<n;j++)
    {
        cin>>arr[i][j];
    }
}
 int i,j,sum1=0,sum2=0,differnce=0;
    for( i =0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum1+=arr[i][j];
            }
        }
        sum2+=arr[i][n-1-i];
        
    }
    differnce=sum1-sum2;
cout<<differnce<<endl;
}