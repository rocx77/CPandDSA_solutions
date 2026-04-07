#include <iostream>

using namespace std;


int main(){
    int t =0;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0;
        int cnt = 0;
        while(i<s.size()){
            if(s[i] == 'B'){
                cnt+=1;
                i+=k;
            }
            else{
                i+=1;
            }
        }

        cout<<cnt<<endl;
    }
}