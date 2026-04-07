#include<iostream>
#include<vector>


using namespace std;


int main(){
    int t=0;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> h(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        for(int i=0;i<n;i++){
            cin>>h[i];
        }

        int i=0,j=0;
        int f = 0;
        int ans = 0;
        while(i<n-1 && j<n-1){
            f += a[j];
            ans = max(ans,j-i+1);
            
            if(f<=k and h[j]%h[j+1] == 0){
                j++;
            }
            else{
                i = j+1;
                j++;
                f = 0;
            }
        }
        ans = max(ans,j-i);
        cout<<ans<<endl;
    }
}