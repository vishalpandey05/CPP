//author : Zenith
// 2023-07-27 20:10:32

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n,m,k; cin >> n>>m >> k;

    if(n > m+k) cout << 2*(m+k) + 1 << endl;
    else{
        cout << 2*n - 1 << endl;
    }
    
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