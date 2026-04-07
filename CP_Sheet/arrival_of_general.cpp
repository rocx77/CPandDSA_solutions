#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int i=0;
    while(i<n){
        cin>>arr[i++];
    }
    int size=arr.size();
    int mini,maxi;
    mini=maxi=0;
    for(int i=0;i<size;i++){
        // cout<<arr[mini]<<"  "<<arr[maxi]<<endl;
        if(arr[i] > arr[maxi]){
            maxi = i;
        }
        if(arr[i] <= arr[mini]){
            mini = i;
        }
    }
    int time=0;
    time = maxi + size-1-mini;
    if(maxi > mini){
        time--;
    }
    cout<< time;
    return 0;
}