//author : Zenith
// 2024-02-08 19:30:38

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];

    int next[n];
    next[n-1] = n;
    for(int i = n-2; i >= 0; i--){
        if(arr[i] == arr[i+1]) next[i] = next[i+1];
        else next[i] = i+1;
    }
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        l--, r--;
        if(next[l] > r) cout << -1 << " " << -1 << endl;
        else cout << l+1 << " " << next[l] + 1 << endl;
    }
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