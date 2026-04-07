#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n],y[n],a[n],b[n];
    int i =0;
    while(i<n){
        cin >> x[i]>>y[i]>>a[i]>>b[i];
        i++;
    }
    for(int j=0;j<n;j++){
        if((y[j]-x[j])%(a[j]+b[j]) == 0){
            cout << (y[j]-x[j])/(a[j]+b[j])<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
