//author : Zenith
// 2023-06-18 20:10:13

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    int cnt = 1, ans = INT_MAX;
    if(arr[n-1] >= n){
        cout << "NO\n";
        return;
    }
    for(int i = 0; i<n-1; i++){
        if(arr[i+1] - arr[i] > 1) {
            cout << "NO\n";
            return;
        }
        if(cnt > ans){
            cout << "NO\n";
            return;
        }
        if(arr[i] == arr[i+1]) cnt++;
        else {
            ans = min(ans, cnt);
            cnt = 1;
        }
    }
    if(cnt > ans){
            cout << "NO\n";
            return;
    }
    ans = min(ans, cnt);
    cout << "YES\n";
    
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