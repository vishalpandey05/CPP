//author : Zenith
// 2024-05-04 11:06:28

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    int mx = -1, cnt = 0;
    for(int i = 0; i < n; i++){
        mx = max(mx, arr[i]%k);
        if(arr[i]%k == 0){
            cout << 0 << endl;
            return;
        }
        if(arr[i] % 2 == 0) cnt++;
    }
    if(k != 4) cout << k - mx << endl;
    else{
        if(cnt > 1) cout << 0 << endl;
        else{
            cout << min(k - mx, 2 - cnt) << endl;
        }
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