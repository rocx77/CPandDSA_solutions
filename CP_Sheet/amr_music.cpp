#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main(){
    int n,k;
    cin >>n>>k;
    if(k==0){
        cout<<0;
        return 0;
    }

    vector<pair<int,int>> days(n);
    int d =0;
    for(int i=0;i<n;i++){
        cin>>d;
        days[i] = {d,i+1};
    }
    vector<int> inst;

    sort(days.begin(),days.end(),[](pair<int,int> a,pair<int,int> b){
        return a.first < b.first;
    });

    for(auto day:days){
        if(day.first <= k){
            k -= day.first;
            inst.push_back(day.second);
        }
    }   
    cout<<inst.size()<<endl;
    for(int i:inst){
        cout<<i<<" ";
    }
    return 0;
}