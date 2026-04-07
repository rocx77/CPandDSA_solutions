#include<iostream>
#include<vector>


using namespace std;

int main(){

    int t=0;
    cin>>t;

    while(t--){
        int n = 0;
        cin>>n;

        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int mi = 0;
        for(int i=0 ;i<n;i++){
            if(p[i] > p[mi]){
                mi = i;
            }
        }

        swap(p[0],p[mi]);
        
        for(int i:p){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}