#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(1){
        if(n>=(i*(i+1))/2){
            n -= (i*(i+1))/2;
            i++;
        }
        else{
            break;
        }
    }
    cout<<i-1<<endl;
}