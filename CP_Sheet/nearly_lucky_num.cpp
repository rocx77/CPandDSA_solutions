#include <iostream>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    // cout<<n;
    int f=0;
    bool islucky = true;
    while(n){
        int d=n%10; 
        n=n/10;
        if(d==4 or d==7){
            f++;
            // cout<<d<<" "<<"f "<<f<<endl;
        }
    }
    if(f==0){
        islucky = false;
    }
    while(f){
        int d=f%10;
        f = f/10;
        if(d!=4 and d!=7){
            islucky = false;
            break;
        }
    }

    if(islucky){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}