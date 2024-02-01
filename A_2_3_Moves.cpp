//author : Zenith
// 2023-06-16 09:18:57

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    if(n == 1) cout << 2 << endl;
    else if(n % 3 == 0) cout << n/3 << endl;
    else cout << n/3 + 1 << endl;
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