#include<iostream>
#include<vector>

using namespace std;

// incomplete 

int helper(vector<int> &arr , int h, int k){
    int time = 0;
    int n = arr.size();
        int i=0;
        while(i<n){
            h -= arr[i];
            time++;
            if(h<=0){
                break;
            }

            if(i == n-1){
                time += k;
                i = -1;
            }
            i++;
        }
        return time;
}

int main(){

    int t=0;
    cin>>t;

    while(t--){
        int n,h,k;
        cin>>n>>h>>k;
        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }


        // find all possible arrays after swaping just one position
        vector<vector<int>> arrays;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(arr[i],arr[j]);    
                arrays.push_back(arr);
                swap(arr[i],arr[j]);
            }
        }
        int ans = 9999999;
        for(auto a:arrays){
            ans = min(ans,helper(a,h,k));
        }
        cout<<ans<<endl;
    }

    return 0;
}