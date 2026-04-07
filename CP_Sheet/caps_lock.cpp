#include<iostream>

using namespace std;

char switch_case(char c){
    if(c>='A' && c<='Z'){
        return (c-'A'+'a');
    }
    else{
        return (c-'a'+'A');
    }
}

int main(){
    string s;
    cin >> s;
    bool isCaps = true;
    for(int i=1;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z')){
            isCaps = false;
            break;
        }
    }
    if(isCaps==false){
        cout<<s;
        return 0;
    }

    for(int j=0;j<s.length();j++){
        s[j] = switch_case(s[j]);
    }
    cout<<s;
}