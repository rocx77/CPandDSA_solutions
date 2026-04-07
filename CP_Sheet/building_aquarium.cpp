#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

long long fil_water(vector<long long> &tank,int h){
    long long water = 0;
    for(int i:tank){
        if(h-i > 0){
            water+=(h-i);
        }
    }
    return water;
}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long> tank(n);
        for(int i=0;i<n;i++){
            cin>>tank[i];
        }

        long long l = 1;
        long long r = int(1e18);
        long long h = 0;
        long long ans = -1;


        while(l<=r){
            h = l + (r-l)/2;
            long long water = fil_water(tank,h);
            // cout<<"h "<<h<<" water "<<water<<endl;
            // if(water == x){
            //     // cout<<"EQUALD"<<endl;
            //     ans = h;
            //     break;
            // }
            if(water > x){
                // cout<<"Water more "<<water<<endl;
                r = h-1;
            }
            else{
                // cout<<"Water less "<<water<<endl;
                ans = max(ans,h);
                l = h+1;
            }
        }
        cout<<ans<<endl;
    }
}