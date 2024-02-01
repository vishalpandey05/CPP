//author : Zenith
// 2023-11-26 20:53:53

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    vector<vector<int>> dp(n, vector<int> (n, 0));
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            if(arr[j] >= arr[i]){
                dp[i][j] = __gcd(arr[i], arr[j]);
            }
        }
    }
    for(int i = 1; i)
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