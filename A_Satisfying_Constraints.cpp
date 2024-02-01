//author : Zenith
// 2024-01-13 20:09:01

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n][2];
    for(int i = 0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        arr[i][0] = a, arr[i][1] = b;
    }
    int mn = 0, mx = 1e9;
    unordered_map<int, int> s;
    for(int i = 0; i < n; i++){
        if(arr[i][0] == 1) mn = max(mn, arr[i][1]);
        else if (arr[i][0] == 2) mx = min(mx, arr[i][1]);
        else s[arr[i][1]]++;
    }   
    int cnt = 0;
    for(auto it : s){
        if(it.first > mx || it.first < mn) cnt++;
    }
    int ans = mx - mn - s.size() + 2 + cnt;
    if(ans <= 0) cout << 0 << endl;
    else cout << ans << endl;
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