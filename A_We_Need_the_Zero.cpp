//author : Zenith
// 2025-01-30 00:05:31

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    int xorr = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        xorr ^= arr[i];
    }
    if(xorr == 0) cout << 0 << endl;
    else{
        if(n & 1) cout << xorr << endl;
        else cout << -1 << endl;
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