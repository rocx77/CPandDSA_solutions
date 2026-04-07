#include <iostream>

using namespace std;

int main(){
    int m;
    cin>>m;
    while(m--){
        int n;
    cin>>n;
    int sum= 0;
    int arr[n];
    int oc=0,ec=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+= arr[i];
        if(arr[i]%2 ==0){
            ec++;
        }
        else{
            oc++;
        }
    }

    if(sum%2 != 0){
        cout<<"YES"<<endl;
    }
    else{
        if(oc>0 && ec>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    }
    
    return 0;

}