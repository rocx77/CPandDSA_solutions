#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()


int main() {
    fast_io;
    int t;
    cin>>t;
    while(t--){

    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int ans = 0;
    for(int i=0 ; i<n ; i++){
        for(int j = i; j<n ; j++){
            ans = max(ans , arr[i]^arr[j]);
        }
    }

    cout<<ans<<endl;
}
    return 0;
}