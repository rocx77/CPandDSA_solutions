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
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);

        int axor = 0;
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            axor ^= arr[i];
        }

        if(axor != 0){
            cout<<"YES"<<endl;
        }
        else if(!(arr.size()&1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}