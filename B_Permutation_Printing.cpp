//author : Zenith
// 2024-02-18 03:57:19

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    vector<int> ans(n);
    int k = 1, z = n;
    if(z & 1) z--;
    for(int i = 0; i < n; i++){
        if(i & 1) {
            ans[i] = z;
            z -= 2;
        }
        else {
            ans[i] = k;
            k += 2;
        }
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
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