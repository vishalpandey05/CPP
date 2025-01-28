//author : Zenith
// 2025-01-28 23:58:45

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    if(arr[0] == arr[n-1]) {
        cout << -1 << endl;
        return;
    }
    int cnt = 0;
    for(int i = n-1; i >= 0; i--){
        if(arr[i] == arr[n-1]) cnt++;
    }
    cout << n-cnt << " " << cnt << endl;
    for(int i = 0; i < n-cnt; i++) cout << arr[i] << " ";
    cout << endl;
    for(int i = 0; i < cnt; i++) cout << arr[n-1] << " ";
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