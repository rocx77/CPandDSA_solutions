#include<iostream>
#include <algorithm>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n = 2*n;
        int arr[n];
        int i=0;
        while(i<n){
            cin>>arr[i++];
        }
        sort(arr,arr+n);
        int diff = abs(arr[n/2] - arr[n/2-1]);
        cout<<diff<<endl;
    }
    return 0;
}
