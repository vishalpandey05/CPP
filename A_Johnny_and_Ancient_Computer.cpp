//author : Zenith
// 2024-10-06 19:28:34

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int f(int x){
    while(x % 2 == 0) x >>= 1;
    return x;
}
void solve(){
    int a, b; cin >> a >> b;
    if(a > b) swap(a, b);
    int r = f(a);
    if(f(b) != r){
        cout << -1 << endl;
        return;
    }
    b /= a;
    int ans = 0;
    while(b >= 8){
        b /= 8;
        ans++;
    }
    if(b > 1) ans++;
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