#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>
using namespace std;


long MOD = (long)pow(10,9)+7;
long long mypow(int a,int b){
        long long s =a,ans =1;
        while(b){
            if(b&1){
                ans = (ans*s)%MOD;
                // ans %= MOD;
            }
            // cout<<ans<<endl;
            s = (s*s)%MOD;
            // s %= MOD;
            b = b>>1;
        }
        return ans;
    }
    
    unordered_map<string,int> vis;
    void findseq(vector<int>& nums,int s, int e,int target,long long* count){
        if(vis[to_string(s)+"-"+to_string(e)] == 1){
            return;
        }
        vis[to_string(s)+"-"+to_string(e)] = 1;
        if(s==e){
            if(nums[s]*2 <= target){
                (*count) += 1;
            }
            return;
        }
        if(nums[s]+nums[e] <= target){
            int betw = e-s-1;
            if(betw == 0){
                (*count) += 1;
            }
            else{
                (*count) += mypow(2,betw);
            }
        }
        findseq(nums,s+1,e,target,count);
        findseq(nums,s,e-1,target,count);
        cout<<s<<" "<<e<<" "<<count<<endl;
        return;
    }

int main(){
    vector<int> nums = {14,4,6,6,20,8,5,6,8,12,6,10,14,9,17,16,9,7,14,11,14,15,13,11,10,18,13,17,17,14,17,7,9,5,10,13,8,5,18,20,7,5,5,15,19,14};
    int target = 22;
    long long count = 0;
    int ans = 272187084;
    std::sort(nums.begin(),nums.end());
    findseq(nums,0,nums.size()-1,target,&count);
    if(count == ans){
        cout<<"Correct Answer"<<endl;
    }
    cout<<ans<<endl;
    // int size = vis.size();
    // cout<<"Size: "<<size<<endl;
    // for(auto it: vis){
    //     cout<<it.first<<endl;
    // }
    cout<<count<<endl;
}