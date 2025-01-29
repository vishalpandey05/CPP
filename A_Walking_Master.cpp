//author : Zenith
// 2025-01-29 23:16:26

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    if(d < b) cout << -1 << endl;
    else{
        int y = abs(d-b);
        a += y;
        int x = abs(a-c);
        if(c > a) cout << -1 << endl;
        else cout << x + y << endl;
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