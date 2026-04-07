#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int lim = 1e6;

    vector<bool> isprime(lim + 1, true);
    isprime[0] = isprime[1] = false;

    for (int i = 2; i * i <= lim; i++) {
        if (isprime[i]) {
            for (int j = i * i; j <= lim; j += i)
                isprime[j] = false;
        }
    }

    vector<int> primes;
    for (int i = 2; i <= lim; i++)
        if (isprime[i]) primes.push_back(i);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        if (is_sorted(arr.begin(), arr.end())) {
            cout << "Bob\n";
            continue;
        }

        vector<vector<int>> pc(n);
        bool alwin = false;

        for (int i = 0; i < n; i++) {
            int x = arr[i];

            for (int p = 0; p < primes.size() && 1LL * primes[p] * primes[p] <= x; p++) {
                if (x % primes[p] == 0) {
                    pc[i].push_back(primes[p]);

                    while (x % primes[p] == 0) x /= primes[p];

                    if (pc[i].size() > 1) {
                        alwin = true;
                        break;
                    }
                }
            }
            if(alwin){
                break;
            }

            if (x > 1) pc[i].push_back(x);

            if (pc[i].size() > 1) {
                alwin = true;
                break;
            }
        }

        if (alwin) {
            cout << "Alice\n";
            continue;
        }

        cout<<"Bob"<<endl;

        // bool bwin = true;
        // for (int j = 1; j < n; j++) {
        //     if (pc[j].empty() || pc[j-1].empty() || pc[j][0] <= pc[j-1][0]) {
        //         bwin = false;
        //         break;
        //     }
        // }

        // cout << (bwin ? "Bob\n" : "Alice\n");
    }

    return 0;
}