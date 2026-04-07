#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int c1=0,c2=0,c3=0;
    for(char c:s){
        if(c == '1'){
            c1++;
        }
        else if(c == '2'){
            c2++;
        }
        else if(c== '3'){
            c3++;
        }
    }
    string ans;
    while(1){
        if(c1!=0){
            ans+="1+";
            c1--;
        }
        else if(c2!= 0){
            ans+="2+";
            c2--;
        }
        else if(c3!= 0){
            ans+="3+";
            c3--;
        }
        else{
            break;
        }
    }
    if(!ans.empty()){
        ans.pop_back();
    }
    cout<<ans<<endl;
    return 0;
}