#include<iostream>

using namespace std;

int main(){
    int n = 0;
    cin>>n;
    long long ans = 1LL<<(n+1);
    cout<<ans-2<<endl;
}