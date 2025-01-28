//author : Zenith
// 2024-04-01 17:29:56

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];

    unordered_map<int, int> m;
    // int pre[n];
    // pre[0] = arr[0];
    // for(int i = 1; i < n; i++) pre[i] = pre[i-1] + arr[i];
    int ans = 0, sum = 0;
    int i = 0, j = 0;
    m[sum]++;
    while(j < n){
        sum += arr[j];
        if(m.find(sum - k) != m.end()) ans += m[sum - k];
        m[sum]++;
        j++;
    }
    cout << ans;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}