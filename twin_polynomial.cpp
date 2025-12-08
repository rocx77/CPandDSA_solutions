#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

long long modpow(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 0; i <= n; ++i) cin >> a[i];

        bool ok = true;
        vector<int> fixed(n + 1, -1);
        for (int i = 0; i <= n; ++i) {
            if (a[i] != -1) {
                int j = a[i];
                if (j < 0 || j > n) { ok = false; break; }
                if (a[j] != -1 && a[j] != i) { ok = false; break; }
                fixed[i] = j;
                fixed[j] = i;
            }
        }

        if (!ok) {
            cout << 0 << '\n';
            continue;
        }

        vector<int> vis(n + 1, 0);
        long long components = 0;

        for (int i = 0; i <= n; ++i) {
            if (vis[i]) continue;

            // Explore the connected component formed by mapping ai <-> aj
            int u = i;
            bool has_known = false;
            vector<int> nodes;

            while (!vis[u]) {
                vis[u] = 1;
                nodes.push_back(u);

                if (a[u] != -1) {
                    has_known = true;
                    if (!vis[a[u]]) u = a[u];
                    else break;
                } else break;
            }

            // If this component has no known mapping => 3 choices
            if (!has_known) components++;
        }

        cout << modpow(3, components) % MOD << '\n';
    }
}
