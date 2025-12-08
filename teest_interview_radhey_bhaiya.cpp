#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// int hash(string num){
//     int p ;
//     char c = "";
//     string pass;
//     string salt = "hello hey bye";
//     for(string s:num){
        
//         p = rand();
//         c = s+p;
//         pass += c;
//         p++;
//     }
//     cout<<pass;
// }



int func1(vector<int> arra,vector<int> arrb){
    int count=0;
    for(int i:arra){
        for(int j:arrb){
            if(i>j){
                count++;
            }
        }
    }
    return count;
}

int func2(vector<int> arra,vector<int> arrb,int n){
    int cnt = 0;
    int i=0;
    int j=0;
    while(i<n && j<n){
        if(arra[i] > arrb[j]){
            cnt = cnt + (n-i);
            j++;
        }
        else{
            i++;
        }
    }
    return cnt;
}





int main() {

    vector<int> a = {2,2,2,2,2,10};
    vector<int> b = {2,2,2,3,3,4};
    vector<int> c = {1,1,1,1,1,4};
    int n = 4;
    int m = 2;

    vector<int> winner(m);

    
    // m^2*n
    // (a,b,c,d,e)
    // a>b , b>c => a>c





    int ans1 = func2(b,a,4);
    int ans2 = func2(a,b,4);
    cout<<(n*n - ans1 - ans2)<<endl;



    return 0;
}
