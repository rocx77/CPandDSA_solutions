#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()


void solve(){
    int n , x , y;
    cin>>n>>x>>y;

    vector<int> a , b;

    for(int i=0;i<n;i++){
        int e;
        cin>>e;

        if(i < x || i >= y){
            a.push_back(e);
        }
        else b.push_back(e);
    }

    int mini = 0;
    for(int i=0;i<b.size();i++){
        if(b[i] < b[mini]){
            mini = i;
        }
    }

    int idxa = 0;;
    int idxb = mini;

    for(;idxa < a.size() ; idxa++){
        if(a[idxa] < b[mini]){
            cout<<a[idxa]<<" ";
        }
        else{
            break;
        }
    }

    for(int i=0;i<b.size();i++){
        cout<<b[idxb]<<" ";
        idxb = (idxb+1)%b.size();
    }

    for(;idxa < a.size() ; idxa++){
        cout<<a[idxa]<<" ";
    }
    cout<<endl;

}


int main() {
    fast_io;
    int t=0; 
    cin >> t;
    while (t--) {
        // solve each test case here
        solve();
    }
    return 0;
}