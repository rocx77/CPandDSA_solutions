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

        for(int i = n; i>=1 ; i--){
            cout<<i<<" \n"[i == 1];
        }
        
    }
    return 0;
}