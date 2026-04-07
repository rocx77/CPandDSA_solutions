#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

int gcd(int a , int b){
    return (b==0) ? a : gcd(b , a%b);
}

int main() {
    fast_io;
    int t=0; 
    cin >> t;
    while (t--) {
        // solve each test case here
        int n;
        cin>>n;

        vector<int> a(n) , b(n);

        for(int i=0 ; i<n; i++){
            cin>>a[i];
        }


        for(int i=0 ; i<n; i++){
            cin>>b[i];
        }

        int cnt = 0;

        for(int i=0 ; i<n-1 ; i++){
            if(i>0 && a[i] == a[i-1]) continue;
            
            if(gcd(a[i] , a[i+1]) < a[i]){
                cnt++;
            }

        }

        if(gcd(a[n-1] , a[n-2]) < a[n-1]) cnt++;
        cout<<cnt<<endl;
        
    }
    // testing range


    return 0;
}