#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

pair<int , int> right_cnt(vector<int> &arr , int idx){
    int rmax = 0, rmin = 0;
    for(int i=idx+1 ; i<arr.size() ; i++){
        if(arr[i] > arr[idx]){
            rmax++;
        }
        else if(arr[i] < arr[idx]){
            rmin++;
        }
    }
    return {rmax , rmin};
}

int main() {
    fast_io;
    int t=0; 
    cin >> t;
    while (t--) {
        // solve each test case here
        int n=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i = 0 ;i<n;i++){
            pair<int , int> ret;
            ret = right_cnt(arr , i);
            cout<<max(ret.first , ret.second)<<" \n"[i==n-1];
        }
    }
    return 0;
}