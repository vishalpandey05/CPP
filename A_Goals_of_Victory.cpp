//author : Zenith
// 2025-01-28 22:46:51

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n-1];
    int sum = 0;
    for(int i = 0; i < n-1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << -1*sum << endl;
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