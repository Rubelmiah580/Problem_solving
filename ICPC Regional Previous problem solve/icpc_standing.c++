#include <bits/stdc++.h>
using namespace std;
int main() {
     int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int p,s,r;
        cin>>p>>s>>r;
        if(r>1 && p==s){
        cout<<"Case "<<i<<": "<<"No"<<endl;
        }
        else{
        cout<<"Case "<<i<<": "<<"Yes"<<endl;
        }
    }
    return 0;
}
