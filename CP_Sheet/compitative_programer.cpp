#include <iostream>

using namespace std;

// the problem states to find if the numbers in the string can  be rearranged
//  to form a number divisible by 60

// check if the sum of the digits is div by 3 
// then check if there is a 0 in the string
// then check if other then that 0 there is another even number


int main(){
    int n=0;
    cin>>n;
    while(n--){
        string num;
        cin>>num;
        
        int dsum = 0;
        bool hasZero = false;
        bool hasEven = false;
        for(char c:num){
            dsum += (c-'0');
            if(c=='0' and !hasZero){
                hasZero = true;
            }
            else if(c == '0' and hasZero == true){
                hasEven = true;
            }
            else if((c-'0')%2==0){
                hasEven = true;
            }
        }

        if(dsum%3 == 0 and hasZero and hasEven){
            cout<<"red"<<endl;
        }
        else{
            cout<<"cyan"<<endl;
        }

    }

    return 0;
}