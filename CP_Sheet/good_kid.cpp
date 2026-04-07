#include<iostream>
#include <vector>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        long long prod=1;
        long long mprod = 0;
        for(int i=0;i<n;i++){
            prod = (arr[i]+1);
            for(int j=0;j<n;j++){
                if(j!=i){
                    prod *= arr[j];
                }
            }
            mprod = max(mprod,prod);
        }
        cout<<mprod<<endl;
    }
}