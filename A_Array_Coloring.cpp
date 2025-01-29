//author : Zenith
// 2025-01-29 09:42:56

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int sum = 0;
    for(auto it : arr) {
        sum += it;
    }

    if(sum % 2 == 1){
        cout << "NO\n";
    } else {
        cout << "YES\n";
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