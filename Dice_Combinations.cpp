//author : Zenith
// 2023-08-24 01:11:32

#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e9 + 7;

    //{1, 2, 3, 4, 5, 6}
int f(vector<int> &dp, int n){
    if(n == 0) return 1;
    if(n < 0) return 0; 
    if(dp[n] != -1) return dp[n];

    int ways = 0;
    for(int i = 6; i >= 1; i--){
        if(i <= n){
            ways += f(dp, n-i)%N;
        }
    }
    return dp[n] = ways%N;
}

void solve(){
    int n; cin >> n;
    vector<int> dp(n+1, -1);
    int ans = f(dp, n);
    cout << ans;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}