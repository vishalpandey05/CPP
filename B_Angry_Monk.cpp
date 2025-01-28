//author : Zenith
// 2024-07-11 20:15:54

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    int arr[k];
    for(int i = 0; i<k; i++) cin >> arr[i];
    sort(arr, arr+k);

    int ans = 0;
    for(int i = 0; i < k-1; i++){
        ans += (arr[i] * 2 - 1);
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