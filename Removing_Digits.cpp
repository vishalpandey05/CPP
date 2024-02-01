//author : Zenith
// 2023-08-28 19:37:20

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    vector<int> dp(n+1, 1e9);
    dp[0] = 0;

    for(int i = 0; i<=n; i++){
        for(auto c: to_string(i)){
            dp[i] = min(dp[i], 1 + dp[i - (c-'0')]);
        }
    }
    cout << dp[n];
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}