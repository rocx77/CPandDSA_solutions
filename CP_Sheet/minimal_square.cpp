#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;
        if(b<a){
            int t=a;
            a = b;
            b = t;
        }

        if(2*a > b){
            cout<<4*a*a<<endl;
        }
        else{
            cout<<b*b<<endl;
        }
    }
    return 0;
}