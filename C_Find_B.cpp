//author : Zenith
// 2024-02-23 20:25:52

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, q; cin >> n >> q;
    int arr[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int pre[n+1], ones[n+1], cnt = 0;
    pre[0] = 0, ones[0] = 0;
    for(int i = 1; i <= n; i++){
        pre[i] = pre[i-1] + arr[i-1];
        ones[i] = ones[i-1] + (arr[i-1] == 1);
    }
    while(q--){
        int l, r; cin >> l >> r;
        if(l == r){
            cout << "NO\n";
            continue;
        }
        int sum = pre[r] - pre[l-1], cnt = ones[r] - ones[l-1];
        sum -= 2*cnt;
        int rem = r-l+1-cnt;
        cout << (sum >= rem ? "YES\n" : "NO\n");  
    }
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