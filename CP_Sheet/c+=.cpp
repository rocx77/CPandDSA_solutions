#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int c=0;
        while(a<=n && b<=n){
            if(a>b){
                b+=a;
                c++;
            }
            else{
                a+=b;
                c++;
            }
        }
        cout<<c<<endl;
    }
}