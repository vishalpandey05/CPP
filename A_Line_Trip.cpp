//author : Zenith
// 2023-11-24 20:09:23

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, x; cin >> n >> x;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    int diff = arr[0];
    for(int i = 1; i < n; i++){
        diff = max(diff, arr[i]-arr[i-1]);
    }
    cout << max(diff, 2*(x - arr[n-1])) << endl;

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