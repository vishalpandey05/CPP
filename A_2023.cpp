//author : Zenith
// 2023-12-30 20:23:29

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    int arr[n];
    int p = 1;
    for(int i = 0; i<n; i++) {cin >> arr[i]; p *= arr[i];}
    if(2023 % p != 0){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
        cout << 2023/p << " ";
        k--;
        while(k--) cout << 1 << " ";
        cout << endl;
    }
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