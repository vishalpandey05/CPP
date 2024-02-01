//author : Zenith
// 2023-06-12 20:17:25

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    if(n < 5) cout << "Bob\n";
    else cout << "Alice\n";
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