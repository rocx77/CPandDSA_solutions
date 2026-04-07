#include<iostream>
#include<algorithm>
#include <cmath>
using namespace std;


int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;

    int dis = abs(max({x1,x2,x3}) - min({x1,x2,x3}));
    cout<<dis;
    return 0;
}