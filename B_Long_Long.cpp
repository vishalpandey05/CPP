//author : Zenith
// 2023-06-29 17:28:28

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, sum = 0, cnt = 0, ans = 0; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
        sum += abs(arr[i]);
        if(arr[i] < 0) cnt++;
        else if(arr[i] == 0) continue;
        else{
            if(cnt) ans++;
            cnt = 0;
        }
    }
    if(cnt) ans++;
    cout << sum << " " << ans << endl;
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