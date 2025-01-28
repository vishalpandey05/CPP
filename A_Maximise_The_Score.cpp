//author : Zenith
// 2024-02-18 03:49:44

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[2*n];
    for(int i = 0; i<2*n; i++) cin >> arr[i];
    int ans = 0;
    sort(arr, arr+2*n);
    for(int i = 0; i < 2*n; i+=2){
        ans += arr[i];
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