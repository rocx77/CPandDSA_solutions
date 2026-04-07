#include<iostream>

using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int tot = k*((w*(w+1))/2);
    if(tot-n > 0){
        cout<<tot-n<<endl;
    } 
    else{
        cout<<0<<endl;
    }
    return 0;
}