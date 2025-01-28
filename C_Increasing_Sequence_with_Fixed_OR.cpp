//author : Zenith
// 2024-07-23 15:59:43

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    vector<int> ans;
    for(int i = 0; i < 64; i++){
        if(n & (1LL << i)) {
            ans.push_back(n^(1LL << i));
        }
    }
    if(ans.size() == 1){
        cout << 1 << endl;
        cout << n << endl;
        return;
    }
    cout << ans.size() + 1 << endl;
    reverse(ans.begin(), ans.end());
    for(auto it : ans) cout << it << " ";
    cout << n << endl;
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