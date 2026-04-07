#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        if(m>n){
            int t=n;
            n = m;
            m = t;
        }

        int ans = m*(n/2) + (m/2)*(n%2) + 1*(m%2)*(n%2);
        // cout<<n<<m<<endl;
        cout<<ans<<endl;
    }
}