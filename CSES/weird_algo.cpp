#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    fast_io;
    ll n=0; 
    cin >> n;
    cout<<n<<" ";
    while(n != 1){

        
        if(n%2 == 0){
            n /= 2;
        }
        else{
            n = n*3 + 1;
        }
        cout<<n<<" ";
    }
    cout<<"\n";

    return 0;
}