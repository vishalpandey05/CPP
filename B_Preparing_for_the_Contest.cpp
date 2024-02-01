//author : Zenith
// 2023-12-19 20:17:12

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    for(int i = 0; i <= k; i++){
        cout << n - k + i <<" ";
    }
    for(int i = n-k-1; i >= 1; i--){
        cout << i << " ";
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