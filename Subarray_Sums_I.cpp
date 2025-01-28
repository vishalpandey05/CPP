//author : Zenith
// 2024-04-01 17:06:01

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int ans = 0, sum = 0;
    unordered_map<int, int> m;
    m[0]++;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(m[sum - k]) ans += m[sum-k];
        m[sum]++;
    }
    cout << ans;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}