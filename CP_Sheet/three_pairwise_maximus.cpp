#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        // cout<<x<<" "<<y<<" "<<z<<endl;
        if(x!=y && y!=z && x!=z){
            cout<<"NO"<<endl;

        }
        else if((x^y^z) == min({x,y,z})){
            cout<<"YES"<<endl;
            cout<<min({x,y,z})<<" "<<min({x,y,z})<<" "<<max({x,y,z})<<endl;
        }
        else{
            cout<<"NO"<<endl;

        }
    }
    return 0;
}