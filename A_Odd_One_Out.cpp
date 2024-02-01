//author : Zenith
// 2023-12-28 20:09:16

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a ^ b ^ c) << endl;
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