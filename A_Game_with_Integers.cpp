//author : Zenith
// 2023-11-17 20:07:07

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    if(n % 3 == 1 || n % 3 == 2) cout << "First\n";
    else cout << "Second\n";
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