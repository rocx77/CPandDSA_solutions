#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int evs=0,ods=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2 == 0 && i%2 != 0){
                ods++;
            }
            if(arr[i]%2 != 0 && i%2 == 0){
                evs++;
            }
        }
        if(evs==ods){
            cout<<evs<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}