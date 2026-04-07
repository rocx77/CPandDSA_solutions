#include<iostream>

using namespace std;

int main(){
    int t=0;
    cin>>t;

    while(t--){
        int n = 0;
        cin>>n;

        string s;
        cin>>s;

        int i=0,j=n-1;
        string ans = "YES";
        while(i<j){
            if(abs(s[i]-s[j])!= 0 && abs(s[i]-s[j]) != 2){
                ans = "NO";
                break;
            }
            i++;
            j--;
        }
        cout<<ans<<endl;
    }
}