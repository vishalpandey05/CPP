//author : Zenith
// 2025-01-29 22:48:35

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    if(n % 2 == 0) cout << "YES\n";
    else{
        if(k % 2 == 0) cout << "NO\n";
        else cout << "YES\n";
    }
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