#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int a, b; cin >> a >> b;
    int mod = 1000000007;
    int res = 1;
    if(b == 0){
        cout << 1 << endl;
        return;
    }
    while(b){
        if(b & 1) {
            res = (res * a) % mod; 
        }
        a = (a * a) % mod; 
        b >>= 1;
    }
    cout << res << endl;
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
