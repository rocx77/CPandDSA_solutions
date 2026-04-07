#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    int digits=0,d;
    while(n--){
        cin>>a;
        d=a%10;
        digits = (d-1)*10;
        int i=1;
        while(a){
            digits += i;
            i++;
            a /= 10;
        }
        cout<<digits<<endl;
    }
}