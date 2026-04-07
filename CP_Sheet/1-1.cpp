#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    fast_io;
    int t=0; 
    cin >> t;
    while (t--) {
        // solve each test case here
        int n = 0;
        cin>>n;
        string s;
        cin>>s;


        string ts = s;
        for(int i=1;i<n-1;i++){
            if(s[i-1] == '1' && s[i+1] == '1'){
                s[i] = '1';
            }
        }
        // cout<<"after maxing "<<s<<endl;
        int mino =0 , maxo=0;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                maxo++;
            }
        }
        
        for(int i=1;i<n-1;i++){
            if(s[i-1] == '1' && s[i+1] == '1'){
                s[i] = '0';
            }
        }
        // cout<<"after mining "<<s<<endl;

        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                mino++;
            }
        }
        cout<<mino<<" "<<maxo<<endl;
    }
    return 0;
}