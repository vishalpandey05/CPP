//author : Zenith
// 2024-02-15 10:13:13

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, x, y; cin >> n >> x >> y;
    int arr[n], ans = 0;
    for(int i = 0; i<n; i++) cin >> arr[i];
    map<pair<int, int>, int> mp;
    for(int i = 0; i < n; i++){
        ans += mp[{(x-(arr[i]%x))%x, arr[i]%y}];
        mp[{arr[i]%x, arr[i]%y}]++;
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