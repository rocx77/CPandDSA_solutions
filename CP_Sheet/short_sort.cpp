#include<iostream>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s == "bca" or s=="cab"){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }

    return 0;
}
