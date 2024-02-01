//author : Zenith
// 2023-06-18 18:25:49

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    int cnt = 0, sum = 0, ans = 0;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == -1) cnt++;
        sum += arr[i];
    }
    int diff = abs(2*cnt - n); 
    for(int i = 0; i<n; i++){
        if(sum < 0){
            if(arr[i] == -1){
                cnt--, ans++;
                sum += 2;
            }
        }
    }
    if(cnt&1) cout << ans+1 << endl;
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