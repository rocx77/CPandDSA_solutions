#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

ll gcdll(ll a,ll b){
    while(b){ ll t=b; b=a%b; a=t; }
    return a;
}

ll lcmll(ll a,ll b){
    return a/gcdll(a,b)*b;
}

int main(){
    fast_io;

    int T;
    cin>>T;

    while(T--){
        ll a,b,c,m;
        cin>>a>>b>>c>>m;

        ll x = m/a;
        ll y = m/b;
        ll z = m/c;

        ll p = m/lcmll(a,b);
        ll q = m/lcmll(a,c);
        ll r = m/lcmll(b,c);

        ll t = m/lcmll(lcmll(a,b),c);

        ll AB = p - t;
        ll AC = q - t;
        ll BC = r - t;

        ll Aonly = x - AB - AC - t;
        ll Bonly = y - AB - BC - t;
        ll Conly = z - AC - BC - t;

        ll alice = Aonly*6 + AB*3 + AC*3 + t*2;
        ll bob   = Bonly*6 + AB*3 + BC*3 + t*2;
        ll carol = Conly*6 + AC*3 + BC*3 + t*2;

        cout<<alice<<" "<<bob<<" "<<carol<<"\n";
    }
}