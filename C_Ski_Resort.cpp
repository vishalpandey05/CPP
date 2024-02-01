//author : Zenith
// 2023-06-06 20:23:55

#include <bits/stdc++.h>
using namespace std;
#define int long long int

// int f(int x){
//     if(x < 2) return 1;
//     return x * f(x-1);
// }

void solve(){
    int n, k, q; cin >> n >> k >> q;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];

    int count = 0, sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] <= q) count++;
        else{
            if(count >= k){
                sum += (count+1-k)*(count+1-k+1)/2;
            }
            count = 0;
        }
    }
    if(count >= k) sum += (count+1-k)*(count+1-k+1)/2;
    cout << sum << endl;
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}