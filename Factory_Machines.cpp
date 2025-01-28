//author : Zenith
// 2024-02-17 22:17:53

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n , k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];

    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += (k/arr[i]);
    }
    int diff = 
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