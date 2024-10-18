#include<iostream>
using namespace std;
int main(){
    string str;
    int i;
    cin>>str;
    for( i =0;i<str.length();i++){
        if(str[i]=='7'){
           break;
        }

    }
    if(str[i]=='7'){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}