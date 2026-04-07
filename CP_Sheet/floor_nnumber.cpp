#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        // cout<<n<<" "<<x<<endl;
        if(n<=2){
            cout<<1<<endl;
            continue;
        }
        int f= (n-2)/x;
        if((n-2)%x > 0){
            f++;
        }
        cout<<f+1<<endl;
    }
    return 0;
}