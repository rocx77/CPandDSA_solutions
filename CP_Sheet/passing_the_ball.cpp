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
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector<bool> vis(n , false);
        int idx = 0;
        for(int i=0;i<n;i++){
            vis[idx] = true;
            if(s[idx] == 'R'){
                idx = (idx + 1)%n;
            }
            else{
                idx = (idx - 1 + n)%n;
            }
        }
        int ans=0;
        for(bool b:vis){
            if(b) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}   