//author : Zenith
// 2024-05-04 11:29:18

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, m; cin >> n >> m;
    int ans = 0;

    for(int i = 1; i <= m; i++){
        int x = n/i + 1;
        int y = x/i;
        ans += y;
    }
    cout << ans-1 << endl;
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