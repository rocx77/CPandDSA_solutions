#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int inp[4];

    cin>>inp[0];
    cin>>inp[1];
    cin>>inp[2];
    cin>>inp[3];
    sort(inp,inp+4);
    int a,b,c;
    a = inp[3] - inp[0];
    b = inp[3]-inp[1];
    c = inp[3]-inp[2];

    cout<<a<<" "<<b<<" "<<c; 

}