#include<iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;

        int maxa = max({a,b,c});
        n = n- (maxa-a) - (maxa-b) - (maxa-c);
        // cout<<"test ";
        // cout<<n<<endl;
        if(n<0){
            cout<<"NO"<<endl;
        }
        else if (n%3 == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}