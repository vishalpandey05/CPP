//author : Zenith
// 2023-06-12 20:00:07

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    int ans = arr[n-1];
    for(int i = 0; i<n; i++){
        if(arr[i] < 0) ans = arr[i];
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