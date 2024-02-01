//author : Zenith
// 2023-05-29 06:29:12

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
        cout << n + 1 - arr[i] << " ";
    }
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