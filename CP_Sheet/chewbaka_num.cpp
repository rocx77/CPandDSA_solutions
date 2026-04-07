#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int d =0;

    int n = s.length();
    for(int i=0;i<n;i++){
        if(i==0 && s[i]=='9'){
            continue;
        }
        d = s[i]-'0';
        if(d>=5){
            s[i] = (9-d)+'0';
        }
    }
    cout<<s;
    return 0;
}