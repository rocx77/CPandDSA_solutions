#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>

using namespace std;


int main(){
    int n=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    sort(arr,arr+n);

    int i = n-1;
    vector<int> ans;

    while(i>=0){
        ans.push_back(arr[i]);
        i-=2;
    }

    if(n%2 == 0){
        i = 0;
    }
    else{
        i = 1;
    }

    while(i<n){
        ans.push_back(arr[i]);
        i+=2;
    }

    for(int i=0;i<ans.size();i++){
        if(ans[i] >= (ans[(i+1)%n] + ans[(i-1+n)%n])){
            // cout<<ans[i]<<" < "<<(ans[(i+1)%n] + ans[(i-1+n)%n])<<endl;
            cout<<"NO"<<endl; 
            return 0;
        } 
    }

    cout<<"YES"<<endl;
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}