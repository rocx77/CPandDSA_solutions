#include <iostream>
#include <cmath>


using namespace std;

// int count_digi(int m){
//     int c = 0;
//     while(m){
//         c++;
//         m /= 10;
//     }
//     return c;
// }

// int fgcd(int a,int b){
//     while(b > 0){
//         int temp = b;
//         b = a%b;
//         a = temp;
//     }

//     return a;
// }


int main(){
    int t=0;
    cin>>t;

    while(t--){
        int a=0,b=0,c=0;
        cin>>a>>b>>c;
        // cout<<"test caSE  "<<a<<" "<<b<<" "<<c<<endl;
        long gcd = 7*long(pow(10,c-1));
        long x = gcd*long(pow(9,a-c));
        long y = gcd*long(pow(8,b-c));

        cout<<x<<" "<<y<<endl;

        // if(fgcd(x,y) == gcd && count_digi(gcd)==c and count_digi(x)==a && count_digi(y)==b){
        //     cout<<"correct"<<endl;
        // }
        // else{
        //     cout<<"wrong"<<endl;
        //     cout<<"GCD  "<<fgcd(x,y)<<" "<<gcd<<endl;
        //     cout<<"COUNT x "<<count_digi(x)<<" "<<a<<endl;
        //     cout<<"COUNT y "<<count_digi(y)<<" "<<b<<endl;
        // }
    }

}