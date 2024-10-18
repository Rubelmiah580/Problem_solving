#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{
    int n,count=0,differ=0;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    while(1){
        int flag = 0;
        for(int i =0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                differ=arr[i+1]-arr[i];
                arr[i]=arr[i]+differ;
                count++;
                break;
            }
            if(arr[i]>arr[i+1]){
                differ=arr[i]-arr[i+1];
                arr[i+1]=arr[i+1]+differ;
                count++;
                break;
            }
        }
    for(int i = 0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            flag=1;
        }
    }
     if(flag==0){
            break;
        }

    }
    cout<<count<<endl;
}


}