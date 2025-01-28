//author : Zenith
// 2024-05-10 20:06:15

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, x; cin >> n >> x;
    cout << min(n, x) << " " << max(n, x) << endl;
    
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