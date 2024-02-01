//author : Zenith
// 2024-01-20 15:54:17

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int ans = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            cnt++;
        }
        else if(cnt > 0){
            ans++;
            cnt = 0;
        }
        else{
            continue;
        }
    }
    if(cnt > 0) ans++;
    if(ans < 3) cout << ans << endl;
    else cout << 2 << endl;
}
signed main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}