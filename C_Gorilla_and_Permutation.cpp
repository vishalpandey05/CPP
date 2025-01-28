//author : Zenith
// 2024-07-11 20:26:50

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, m, k; cin >> n >> m >> k;
    for(int i = n; i > m; i--){
        cout << i << " ";
    }
    for(int i = 1 ; i <= m; i++) cout << i << " ";
    cout << endl;
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