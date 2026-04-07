#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    cin>>n;

    int mis = 0;

    for(int i=0 ; i<n-1 ; i++){
        int a;
        cin>>a;
        mis ^= a;
        if(i!= 0){
            mis ^= i;
        }
    }

    mis ^= n^(n-1);

    cout<<mis<<endl;
    
    return 0;
}