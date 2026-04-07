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

        vector<int> arr(n);
        for(int i =0 ; i<n ; i++){
            cin>>arr[i];
        }
        int seats = 0;
        for(int i=0 ; i<n ; i++){
            if(arr[i] <= (i+1)){
                seats++;
            }
        }
        cout<<seats<<"\n";
    }
    return 0;
}