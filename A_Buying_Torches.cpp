//author : Zenith
// 2024-11-04 00:06:40

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int x, y, k; cin >> x >> y >> k;
    int req = k*(y+1);
    int ans = 1+k;
    req -= x;
    ans += (req+x-2)/(x-1);
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