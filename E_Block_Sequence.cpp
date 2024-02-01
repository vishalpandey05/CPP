//author : Zenith
// 2023-10-13 19:40:46

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    vector<int> dp(n, 1e9);
    dp[0] = 1;
    if(arr[0] < n) dp[0 + arr[0]] = 0;

    for(int i = 1; i<n; i++){
        dp[i] = min(dp[i-1]+1, dp[i]);
        if(i + arr[i] < n) dp[i + arr[i]] = min(dp[i-1], dp[i+arr[i]]);
    }
    cout << dp[n-1] << endl;
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