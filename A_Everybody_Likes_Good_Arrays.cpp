//author : Zenith
// 2025-01-29 23:34:29

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int ans = 0;
    for(int i = 1; i < n; i++){
        if((arr[i] % 2 == 0 and arr[i-1] % 2 == 0) || (arr[i] % 2 == 1 and arr[i-1] % 2 == 1)) ans++;
    }
    cout << ans << endl;
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