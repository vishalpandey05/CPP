//author : Zenith
// 2023-12-19 20:33:15

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    int a[n], b[n];
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<n; i++) cin >> b[i];

    int ans = 0, val = 0, mx = 0;
    for(int i = 0; i < min(n, k); i++) {
        val += a[i];
        mx = max(mx, b[i]);
        ans = max(ans, val+mx*(k-i-1));
    }
    cout << ans << endl;

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