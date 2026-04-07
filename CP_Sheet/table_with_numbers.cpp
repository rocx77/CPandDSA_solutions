#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n,h,l;
        cin>>n>>h>>l;   
        vector<int> rows;
        vector<int> cols;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        int a=0;

        if(h>l){
            int t = h;
            h = l;
            l = t;
        }


        for(int i=0;i<n;i++){
            a = arr[i];
            if(a>h && a<=l){
                cols.push_back(a);
                arr[i] = -1;
            } 
            // cout<<arr[i]<<" ";
        }

        
        for(int i=0;i<n;i++){
            a = arr[i];
            if(a>=1 && a<=h){
                // cout<<a<<" ";
                if(rows.size() <= cols.size()){
                    rows.push_back(a);
                }
                else{
                    cols.push_back(a);
                }
            } 
        }

        cout<<min(rows.size(),cols.size())<<endl;

    }
    return 0;
}