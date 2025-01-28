//author : Zenith
// 2024-10-06 19:00:05

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n, greater<int>());
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    // for(int i = 0; i < n; i += 2) cout << arr[i] << " ";
    cout << endl;
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