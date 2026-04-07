#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s[n];

    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int x =0;
    for(string str:s){
        if(str=="++X" || str=="X++"){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x;
    return 0;
}