#include<iostream>


using namespace std;

int main(){
    int row,col;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int x=0;
            cin>>x;
            if(x==1){
                row=i;
                col=j;
                cout<<abs(2-row)+abs(2-col);
                return 0;
            }
        }
    }
    return 0;
}
