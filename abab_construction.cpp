#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long>>
#define all(x) (x).begin(), (x).end()


string make_ideal_str(int n){
    string ret = "";
    for(int i=1 ; i<=n ;i++){
        if(i&1){
            ret+= 'a';
        }
        else{
            ret += 'b';
        }
    }
    return ret;
}



bool check(string A , string X , int idx , int i , int j){
    if(idx == A.size()) return true;

    if(A[idx] != X[i] && A[idx] != X[j]) return false;
    

    if(A[idx] == X[i] && A[idx] == X[j]){
        return check(A , X , idx+1 , i+1 , j) || check(A , X , idx+1 , i , j-1);
    }

    else if(A[idx] == X[i]){
        return check( A , X , idx+1 , i+1 , j);
    }
    else if(A[idx] == X[j]){
        return check(A , X , idx+1 , i , j-1);
    }

    return true;
}



bool gen_check(string s , int idx , string ideal){

    if(idx == s.size()){
        bool ret = check(s , ideal , 0 , 0 , s.size()-1);
        // cout<<"To check "<<s <<" it is "<<ret<<endl;
        return ret;
    }

    if(s[idx] == '?'){
        s[idx] = 'a';
        if(gen_check(s , idx+1 , ideal)) return true;
        s[idx] = 'b';
        if(gen_check(s , idx+1 , ideal)) return true;
    }
    else{
        return gen_check(s , idx+1 , ideal);
    }
    return false;
}



int main() {
    fast_io;
    int t=0; 
    cin >> t;
    while (t--) {
        // solve each test case here
        int n ;
        cin>>n;
        string s;
        cin>>s;

        string ideal = make_ideal_str(n);

        if(gen_check(s , 0 , ideal)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }



    return 0;
}