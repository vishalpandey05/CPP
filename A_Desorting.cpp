//author : Zenith
// 2025-01-29 09:53:59

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int diff = 1e9;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i-1]){
            cout << 0 << endl;
            return;
        }
        diff = min(diff, arr[i]-arr[i-1]);
    }
    cout << (diff)/2+1 << endl;
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