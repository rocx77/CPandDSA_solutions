#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){

    int t =0;
    cin>>t;
    while(t--){
        int n = 0;
        cin>>n;
        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int m = *max_element(arr.begin(),arr.end());
        int ans = count(arr.begin(),arr.end(),m);
        cout<<ans<<endl;
    }
}