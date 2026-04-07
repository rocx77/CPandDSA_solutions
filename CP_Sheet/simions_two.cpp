#include<iostream>
#include <vector>

using namespace std;

// bool isprime(int m){
//     int i = 2;
//     while(i*i <= m){
//         if(m%i == 0){
//             return false;
//         }
//     }

//     return true;
// }

int main(){
    int t=0;
    cin>>t;

    long long l = 3165;
    vector<bool> is_prime(l+1,true);
    
    for(int i=2;i*i<=l;i++){
        if(is_prime[i]){
            for(int j=i*i;j<=l;j+=i){
                is_prime[j] = false;
            }
        }
    }
    vector<long long> primes;
    for(int j=2;j<=l;j++){
        if(is_prime[j]) primes.push_back(j);
    }

    while(t--){
        int n=0;
        cin>>n;
        long long ans = 1;
        long long temp = n;
        for(int i=0;i<primes.size();i++){
            long long p = primes[i];
            if(p*p > temp){
                break;
            }
            if(temp%p == 0){
                ans *= p;
                while(temp%p == 0){
                    temp = temp/p;
                }
            }
        }
        if(temp > 1){
            ans *= temp;
        }
        cout<<ans<<endl;

    }
    return 0;
}