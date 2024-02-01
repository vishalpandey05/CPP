//author : Zenith
// 2024-01-15 21:55:48

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<m; i++) cin >> b[i];
    sort(a, a+n, greater<int>());
    sort(b, b+n);
    
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