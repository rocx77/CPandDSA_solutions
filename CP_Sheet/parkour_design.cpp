#include<iostream>
#include <map>
#include<vector>
using namespace std;




int main(){
    int t=0;
    cin>>t;


    // approach 1

    // while(t--){
    //     long long x,y;
    //     cin>>x>>y;
    //     if((x+y)%3 != 0){
    //         cout<<"No"<<endl;
    //         continue;
    //     }
    //     long long k = (x - 2*y);
    //     if(k%3 != 0){
    //         cout<<"No"<<endl;
    //         continue;
    //     }
    //     int checker = 0;
    //     if(y<0){
    //         checker = -y;
    //     }

    //     if(k/3 >= 2*checker){
    //         cout<<"Yes"<<endl;
    //     }
    //     else{
    //         cout<<"No"<<endl;
    //     }


    // }

    // approch 2

    while(t--){
        long long x,y;
        cin>>x>>y;

        if(y == 0){
            if(x%3 == 0){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else if(y>0){
            x -= 2*y;
            y = 0;
            if(x>=0 and x%3 == 0){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            x -= 4*(-y);
            y = 0;
            if(x>=0 and x%3 == 0){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }

    return 0;
}