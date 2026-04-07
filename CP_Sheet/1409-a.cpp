#include<iostream>

using namespace std;
int main(){
    int t =0;
    cin>>t;
    while(t--){
        int a = 0, b = 0;
        cin>>a>>b;
        if(a == b){
            cout<<0<<endl;
        }
        else{
            cout<<(abs(b-a) + 9)/10<<endl;
        }
    }
}