#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long int score=0,differ=0;
        cin>>n;
        int arr[2*n];
        for(int i =0;i<2*n;i++){
            cin>>arr[i];
        }
    sort(arr,arr+2*n);
    for(int i =0;i<n;i++){
        differ=arr[2*n-i-1]-arr[i];
        score+=differ;
    }

    cout<<score<<endl;

    }
}
