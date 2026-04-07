#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;

    int t;
    cin >> t;

    while(t--) {

        int n, h;
        cin >> n >> h;

        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];

        vector<ll> left(n,0), right(n,0);


        for(int i=0;i<n;i++){
            int maxh = a[i];
            for(int j=i-1;j>=0;j--){
                maxh = max(maxh, a[j]);
                left[i] += (h - maxh);
            }
        }

        for(int i=0;i<n;i++){
            int maxh = a[i];
            for(int j=i+1;j<n;j++){
                maxh = max(maxh, a[j]);
                right[i] += (h - maxh);
            }
        }

        ll ans = 0;


        for(int k=0;k<n;k++){

            ll bestLeft = 0;

            for(int i=0;i<=k;i++){
                ll water = (h - a[i]) + left[i];

                int maxh = a[i];
                for(int j=i+1;j<=k;j++){
                    maxh = max(maxh, a[j]);
                    water += (h - maxh);
                }

                bestLeft = max(bestLeft, water);
            }

            ll bestRight = 0;

            for(int i=k+1;i<n;i++){
                ll water = (h - a[i]) + right[i];

                int maxh = a[i];
                for(int j=i-1;j>=k+1;j--){
                    maxh = max(maxh, a[j]);
                    water += (h - maxh);
                }

                bestRight = max(bestRight, water);
            }

            ans = max(ans, bestLeft + bestRight);
        }

        cout << ans << "\n";
    }

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// #define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
// #define ll long long
// #define all(x) (x).begin(), (x).end()

// int main() {
//     fast_io;
//     int t=0; 
//     cin >> t;
//     while (t--) {
//         // solve each test case here
//         int n , h;
//         cin>>n>>h;

//         vector<int> a(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }

//          ll ans = 0;

//         for(int k = 0; k < n; k++){

//             ll bestleft = 0;

//             for(int i = 0; i <= k; i++){

//                 ll water = h - a[i];
//                 int maxh = a[i];

//                 int l = i - 1;
//                 while(l >= 0){
//                     maxh = max(maxh, a[l]);
//                     water += h - maxh;
//                     l--;
//                 }

//                 maxh = a[i];

//                 int r = i + 1;
//                 while(r <= k){
//                     maxh = max(maxh, a[r]);
//                     water += h - maxh;
//                     r++;
//                 }

//                 bestleft = max(bestleft, water);
//             }

//             ll bestright = 0;

//             for(int i = k+1; i < n; i++){

//                 ll water = h - a[i];
//                 int maxh = a[i];

//                 int l = i - 1;
//                 while(l >= k+1){
//                     maxh = max(maxh, a[l]);
//                     water += h - maxh;
//                     l--;
//                 }

//                 maxh = a[i];

//                 int r = i + 1;
//                 while(r < n){
//                     maxh = max(maxh, a[r]);
//                     water += h - maxh;
//                     r++;
//                 }

//                 bestright = max(bestright, water);
//             }

//             ans = max(ans, bestleft + bestright);
//         }

//         cout <<ans<<"\n";


//         // vector<ll> leftdrain(n);
        
//         // leftdrain[0] = 0;
//         // // cout<<0<<" ";
//         // for(int i=1;i<n;i++){
//         //     int l = i-1;
//         //     ll lwater = 0;
//         //     int maxh = a[i];
//         //     while(l>=0){
//         //         if(a[l] > maxh){
//         //             maxh = a[l];
//         //         }
//         //         lwater += (h - maxh);
//         //         l--;
//         //     }
//         //     leftdrain[i] = lwater;
//         //     // cout<<lwater<<" ";
//         // }
        
        
//         // vector<ll> rightdrain(n);
//         // rightdrain[n-1] = 0;
//         // // cout<<0<<" ";
//         // for(int i=n-2;i>=0;i--){
//         //     int r = i+1;
//         //     ll rwater = 0;
//         //     int maxh = a[i];
//         //     while(r<n){
//         //         if(a[r] > maxh){
//         //             maxh = a[r];
//         //         }
//         //         rwater += (h - maxh);
//         //         r++;
//         //     }
//         //     rightdrain[i] = rwater;
//         //     // cout<<rwater<<" ";
//         // }

//         // ll ans =0;
//         // for(int i=0;i<n;i++){
//         //     ans = max(ans ,(long long)(h-a[i]) + leftdrain[i] + rightdrain[i]);
//         // }



//         //###### Approach wrong #######

//         // // finding the minimun height column
//         // int mini = 0;
//         // for(int i=0;i<n;i++){
//         //     if(a[i] < a[mini]){
//         //         mini = i;
//         //     }
//         // }

//         // // calculatinig water drained and marking the empty columns
//         // int l = mini - 1, r = mini + 1;
//         // int maxh = a[mini];
//         // ll water  = h - maxh; 

//         // // calculating left side drain
//         // while(l>=0){
//         //     if(a[l] > maxh){
//         //         maxh = a[l];
//         //     }
//         //     water += (h - maxh);
//         //     a[l] = h;
//         //     l--;
//         // }

//         // //reseting maxheight to minmum
//         // maxh = a[mini];
//         // // calculating right side drain
//         // while(r<n){
//         //     if(a[r] > maxh){
//         //         maxh = a[r];
//         //     }
//         //     water += h-maxh;
//         //     a[r] = h;
//         //     r++;
//         // }
//         // // marking of the first min column
//         // a[mini] = h;


//         // // finding teh pos for second drain

//         // mini = n-1;
//         // for(int i=n-1;i>=0;i--){
//         //     if(a[i] < a[mini]){
//         //         mini = i;
//         //     }
//         // }

//         // l = mini - 1;
//         // r = mini + 1;
//         // maxh = a[mini];
//         // water += h - maxh;
        
//         // // calculating left side drain
//         // while(l>=0){
//         //     if(a[l] > maxh){
//         //         maxh = a[l];
//         //     }
//         //     water += (h - maxh);
//         //     a[l] = h;
//         //     l--;
//         // }
        
//         // //reseting maxheight to minmum
//         // maxh = a[mini];
//         // // calculating right side drain
//         // while(r<n){
//         //     if(a[r] > maxh){
//         //         maxh = a[r];
//         //     }
//         //     water += h-maxh;
//         //     a[r] = h;
//         //     r++;
//         // }

//         // cout<<water<<endl;

//     }
//     return 0;
// } 