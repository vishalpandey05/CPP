//author : Zenith
// 2023-08-18 22:52:39

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, m; cin >> n;
    int a[n];
    for(int i = 0; i<n; i++) cin >> a[i];
    cin >> m;
    int b[m];
    int sum = 0;
    for(int i = 0; i<m; i++) {
        cin >> b[i];
        sum += b[i];
    }
    cout << a[sum%n] << endl;
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