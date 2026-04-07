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
        int n=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        vector<int> t(arr.begin() , arr.end());
        sort(t.begin() , t.end());

        int p1 = n-1 , p2 = n-1;
        int ans = 0;
        while(p1>=0){   
            if(arr[p1] == t[p2]){
                ans++;
                p1--;
                p2--;
            }
            else if(arr[p1] < t[p2]) {
            
                if(p1==0){
                    p2--;
                }
                else{
                    p1--;
                }
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}