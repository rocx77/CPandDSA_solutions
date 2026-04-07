#include<iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    long long n;
    
    while(t--){
        cin>>n;
        if(n<=3){
            cout<<"NO"<<endl;
            continue;
        }

        if(n%4!=0){
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
        vector<long long> arr(n);
        for(int i=0;i<n/2;i++){
            arr[i] = 2*(i+1);
        }
        for(int i=0;i<n/4;i++){
            arr[i+n/2] = arr[i]-1;
            arr[n-1-i] = arr[n/2-1-i]+1;
        }

        for(long long i:arr){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}