#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    fast_io;
    int n=0 , m ; 
    cin >> n >> m;
    vector<ll> v(n) , d(n);
    for(int i=0; i<n ; i++){
        cin>>v[i];
    }
    
    for(int i=0; i<n ; i++){
        cin>>d[i];
    }
    

    /*
        This is my Brute force solution this will for sure give a TLE as the constraints are
        1 <= n <= 10^5
        1 <= m <= 10^9
        1 <= v[i] <= 10^9
        1 <= d[i] <= 10^9

        so for worst case this will go to 10^14 (n*m)
    */
    
    // int maxmeal = 0;

    // while(m-- ){
    //     int maxi = 0;
    //     for(int i=0;i<n;i++){
    //         if(v[i] > v[maxi]){
    //             maxi = i;
    //         }
    //     }

    //     if( v[maxi] > 0){
    //         maxmeal += v[maxi];
    //         v[maxi] -= d[maxi];
    //     }
    //     else{
    //         break;
    //     }
    // }

    // cout<<maxmeal<<endl;



    // now to use priority queue / max heap

    ll ans = 0;
    
    priority_queue<pair<int,int>> pq;

    int maxtaste = 0;

    for(int i=0 ; i<n ; i++){
        pq.push({v[i] , i});
    }

    // this is pure simulation using heap
    // while(m-- && !pq.empty()){
    //     auto p = pq.top();
    //     pq.pop();

    //     maxtaste += p.first;

    //     p.first -= d[p.second];
    //     if(p.first > 0){
    //         pq.push(p);
    //     }

    // }

    // we can at each top step find the next best and add from the curr till it is not better then the next best and append the remaining to the p
    
    
    cout<<maxtaste<<endl;

    return 0;
}