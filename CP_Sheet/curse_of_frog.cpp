#include <iostream>
#include <vector>
using namespace std;

int best_jump(vector<int>  &a,vector<int>  &b,vector<int>  &c,int N){
    int mj = a[0] - (1/b[0])*c[0];
    int mji=0;
    for(int i=0;i<N;i++){
        int ju = a[i] - (1/b[i])*c[i];
        if(ju > mj){
            mj = ju;
            mji = i;
        }
    }
    return mji;
}



int main(){

    int t=0;
    cin>>t;
    while(t--){
        // cout<<"t: "<<t<<endl;
        long long N,X;
        cin>>N>>X;
        // cout<<"N M "<<N<<" "<<X<<endl;
        vector<int> a(N);
        vector<int> b(N);
        vector<int> c(N);
        for(int i=0;i<N;i++){
            cin>>a[i]>>b[i]>>c[i];
            // cout<<"a b c "<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
        }
        int cnt = 0;
        while(X>0){
            int bji = best_jump(a,b,c,N);
            if(b[bji] > 1){
                b[bji]--;
            }
            else{
                cnt++;
            }
            int bj = a[bji] - (1/b[bji])*c[bji];
            X -= bj;
            if(bj<=0){
                break;
            }
        }
        if(X>0){
            cout<<-1<<endl;
        }
        else{
            cout<<cnt<<endl;
        }
    }
    return 0;
}