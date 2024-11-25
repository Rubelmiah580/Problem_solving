#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int product_prize;
        double pd_prize_including_vat;
        cin>>product_prize;
        pd_prize_including_vat = product_prize*1.15;
        cout<<fixed<<setprecision(2);
        cout<<pd_prize_including_vat<<endl;
    }
}