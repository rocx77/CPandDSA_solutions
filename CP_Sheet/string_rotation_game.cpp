#include<iostream>

using namespace std;

int count_blocks(string s, int indx){
    int n = s.size();
    int count = 1;
    int k = (indx+1)%n;
    // cout<<"testing "<<indx<<endl;

    for(int i=0;i<n-1;i++){
        if(s[k] != s[(k-1+n)%n]){
            // cout<<s[(k-1+n)%n]<<" ";
            count++;
        }
        k = (k+1)%n;
    }

    return count;
}

int main(){
    int t=0;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        // cout<<s<<endl;

        // int bc = count_blocks(s,2);
        // cout<<bc<<endl;
        int ans = 0;
        for(int i=0;i<n;i++){
            int res = count_blocks(s,i);
            ans = max(ans,res);
            // cout<<endl<<i<<"->"<<res<<" ";
        }

        cout<<ans<<endl;

    }
}