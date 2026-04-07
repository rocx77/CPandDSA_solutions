#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        long long r, g, b;
        cin >> r >> g >> b;
        
        char ch[3] = {'R', 'G', 'B'};
        
        long long total = r + g + b;
        long long cmax = max({r, g, b});
        long long other = total - cmax;
        long long maxlen = (cmax > other + 1) ? 2*other + 1 : total;
        
        string result;
        result.reserve(maxlen);
        
        using T = tuple<long long, long long, int>;
        priority_queue<T, vector<T>, greater<T>> pq;
        
        long long cnt[3] = {r, g, b};
        for(int i = 0; i < 3; i++)
            if(cnt[i] > 0)
                pq.push(make_tuple(-cnt[i], 0LL, i));
        
        while(!pq.empty()){
            vector<T> cands;
            bool placed = false;
            int n = (int)result.size();
            
            while(!pq.empty()){
                T top = pq.top();
                pq.pop();
                
                long long c = -get<0>(top);
                long long neg_l = get<1>(top);
                int idx = get<2>(top);
                
                bool ok = true;
                if(n >= 1 && result[n-1] == ch[idx]) ok = false;
                if(ok && n >= 3 && result[n-3] == ch[idx]) ok = false;
                
                if(ok){
                    result += ch[idx];
                    if(c - 1 > 0)
                        pq.push(make_tuple(-(c-1), -(long long)(n+1), idx));
                    for(int i = 0; i < (int)cands.size(); i++)
                        pq.push(cands[i]);
                    placed = true;
                    break;
                } else {
                    cands.push_back(top);
                }
            }
            
            if(!placed){
                for(int i = 0; i < (int)cands.size(); i++)
                    pq.push(cands[i]);
                break;
            }
        }
        
        cout << result << '\n';
    }
    return 0;
}