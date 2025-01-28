//author : Zenith
// 2024-02-27 20:06:35

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += abs(arr[i]);
    }
    cout << sum << endl;
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