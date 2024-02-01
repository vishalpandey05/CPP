//author : Zenith
// 2023-11-24 20:18:14

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    int curr = 1, ans = 0;
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
        if(arr[i] > curr) ans += arr[i] - curr;
        curr = arr[i];
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