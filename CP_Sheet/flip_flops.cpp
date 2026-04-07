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
        ll n , c, k;
        cin>>n>>c>>k;
        vector<ll> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        ll lcnt = 0;
        ll i = 0;
        while(lcnt < n){
            if(arr[i] <= c){
                ll off = min(c - arr[i] , k);
                c += arr[i] + off;
                // cout<<c<<" "<<arr[i]<<" "<< min(c - arr[i] , k) <<endl;
                k = k - off;
                arr[i] = LLONG_MAX;
                lcnt = 0;
            }
            else{
                lcnt++;
            }
            i = (i+1)%n;
        }

        cout<<c<<endl;
    }
    return 0;
}   