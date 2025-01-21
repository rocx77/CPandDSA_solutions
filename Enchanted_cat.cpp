#include <iostream>

using namespace std;

/*
how many n digit numbers are divisible by 2^x completely
1.
the range of numbers is 10^(n-1) to 10^n - 1
we can start by findidiing the first number divisible by 2^x then the last number divisible by 2^x
then we can find the number of n digit numbers divisible by 2^x in this range
 by dividing the difference between the first and last number by 2^x
*/

int main() {
    
    int n, x;
    cin >> n >> x;
    long long start = (n>1)?1:0 , end = 1;
    for (int i = 0; i < n - 1; i++) {
        start *= 10;
    }
    long long power = 1LL<<x;
    end = (n>1) ? start * 10 - 1 : 9;
    if(power > end){
        cout<<0;
        return 0;
    }
    long long first =(n>1) ? ((start + power-1)/power) * power : power;
    long long last = (end/power)*power;
    
    cout<<"power: "<<power<<endl;
    cout<<first<<" "<<last<<endl;

    if (first > end){
        cout<<0;
        return 0;
    }
    else{
        cout<<(last-first)/power +1;
        return 0;
    }
}