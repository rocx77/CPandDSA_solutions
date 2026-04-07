#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int fill=0;
    int cap = 0;
    int a,b;
    for(int i=0;i<N;i++){
        cin>>a>>b;
        // cout<<(fill - a + b)<<" ";
        fill = fill -a +b;
        cap = max(cap,fill);
    }
    cout<<cap;
    return 0;

}