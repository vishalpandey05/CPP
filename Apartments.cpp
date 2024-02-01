//author : Zenith
// 2023-12-18 22:25:24

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, m; cin >> n >> m;
    int a[n];
    for(int i = 0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    int ans = 0, curr = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        curr += a[i];
        if(curr > m || cnt > 2){
            curr = m;
            ans++;
        }
    }
    cout << ans;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}