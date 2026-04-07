#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    int x,y,l,r;
    while(t--){
        cin>>l>>r;
        x = l;
        y = 2*x;
        if(y>r){
            cout<<-1<<" "<<-1<<endl;
            continue;
        }
        cout<<x<<" "<<y<<endl;
        
    }
    return 0;
}