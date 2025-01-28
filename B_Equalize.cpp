//author : Zenith
// 2024-02-11 15:26:03

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    arr.resize(unique(arr.begin(), arr.end()) - arr.begin());

    int pnt = 0, ans = 0;
    for(int i = 0; i < arr.size(); i++){
        while(arr[i] - arr[pnt] >= n) pnt++;
        ans = max(ans, i-pnt+1);
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