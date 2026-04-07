#include<iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    vector<int> rounds;
    int d =0;
    while(t--){
        cin>>n;
        int i=1;
        while(n){
            d = n%10;
            n = n/10;
            if(d != 0){
                rounds.push_back(d*i);
            }
            i*=10;
        }
        cout<<rounds.size()<<endl;
        for(int i:rounds){
            cout<<i<<" ";
        }
        cout<<endl;
        rounds.clear();
    }
    return 0;
}