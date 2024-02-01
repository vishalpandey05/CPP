//author : Zenith
// 2023-06-06 21:18:07

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k;
    cin >> n >> k;
    
    k = min(k, 30ll);
    cout << min(n+1, (long long)(1 << k)) << endl;

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