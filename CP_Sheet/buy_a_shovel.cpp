#include<iostream>

using namespace std;

int main(){
    int k,r;
    cin>>k>>r;
    // q*k%10 == r need to find min q
    int q =1;
    while(1){
        if((q*k)%10 == 0 or (q*k)%10== r){
            break;
        }
        q++;
    }
    cout<<q<<endl;

    return 0;
}