//author : Zenith
// 2023-06-26 22:30:27

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int ans = 0;
    for(int i = 1; i<=n; i++){
        ans += pow(2, i);
    }
    cout << ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}