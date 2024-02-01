//author : Zenith
// 2023-10-12 02:28:26

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int a, b; cin >> a >> b;
    if(min(a,b)*2 < max(a, b)){
        cout << "NO\n";
        return;
    }
    if((a+b) % 3 == 0) cout <<"YES\n";
    else cout << "NO\n";
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