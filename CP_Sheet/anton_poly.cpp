#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n--){
        string in;
        cin>>in;
        if(in[0] == 'T'){
            ans += 4;
        }
        else if(in[0] == 'C'){
            ans += 6;
        }
        else if(in[0] == 'O'){
            ans += 8;
        }
        else if(in[0] == 'D'){
            ans += 12;   
        }
        else if(in[0] == 'I'){
            ans += 20;
        }
    }
    cout<<ans;
    return 0;
}