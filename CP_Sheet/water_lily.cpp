#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int h,l;
    cin>>h>>l;
    double ans;
    ans = double((double)l*l - (double)h*h);
    ans = ans/double(2.0*h);
    cout<<fixed<< setprecision(14) <<ans;
    return 0;
}