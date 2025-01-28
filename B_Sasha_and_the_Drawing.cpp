//author : Zenith
// 2024-02-15 20:17:08

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    if(k <= (4*n - 4)) cout << (k+1)/2 << endl;
    else {
        if(k ==  (4*n - 3)) cout << (4*n-4)/2 + 1 << endl;
        else cout << (4*n-4)/2 + 2 << endl;
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