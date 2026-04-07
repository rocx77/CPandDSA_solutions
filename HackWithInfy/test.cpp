#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll brute(vector<ll>& b, ll m, ll k){
    ll ans = LLONG_MAX;
    for(ll i = 0; i + m - 1 < (ll)b.size(); i++){
        ll cost = b[i];
        for(ll j = 1; j < m; j++)
            cost += (ll)j * k * (b[i+j] - b[i+j-1]);
        ans = min(ans, cost);
    }
    return ans;
}

ll sliding(vector<ll>& b, ll m, ll k){
    ll ans = LLONG_MAX;
    ll time = b[0];
    for(ll i = 1; i < m; i++)
        time += (b[i] - b[i-1]) * i * k;
    ans = min(ans, time);
    for(ll i = 0; i < (ll)b.size() - m; i++){
        time -= b[i];
        time -= k * (b[i+m-1] - b[i]);
        time += b[i+1];
        time += (m-1) * k * (b[i+m] - b[i+m-1]);
        ans = min(ans, time);
    }
    return ans;
}

int main(){
    srand(42);
    int tests = 10000;
    while(tests--){
        int n = rand() % 10 + 2;
        int m = rand() % 3 + 1;
        int k = rand() % 10 + 1;

        vector<ll> arr(n);
        for(int i = 0; i < n; i++) arr[i] = rand() % 2;

        vector<ll> b;
        for(int i = 0; i < n; i++) if(arr[i]) b.push_back(i);

        if((ll)b.size() < m) continue;

        ll r1 = brute(b, m, k);
        ll r2 = sliding(b, m, k);

        if(r1 != r2){
            cout << "MISMATCH! n=" << n << " m=" << m << " k=" << k << "\n";
            cout << "arr: "; for(auto x:arr) cout << x << " "; cout << "\n";
            cout << "brute=" << r1 << " sliding=" << r2 << "\n";
            return 0;
        }
    }
    cout << "All tests passed!\n";
}