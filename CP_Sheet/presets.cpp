#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int ans[n];
    int j=0;
    for(int i=0;i<n;i++){
        cin>>j;
        ans[j-1]=i+1;
    }
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}