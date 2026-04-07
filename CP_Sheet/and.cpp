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
        int a , b , c;
        cin>>a>>b>>c;
        int sm = a+b+c;
        cout<<((sm/3) + (sm%3))<<endl;
    }
    return 0;
}