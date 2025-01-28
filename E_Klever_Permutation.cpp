//author : Zenith
// 2024-02-08 01:28:06

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    vector<int> ans(n, 0);
    int f = 1, l = n;
    for(int i = 0; i < k; i++){
        for(int j = i; j < n; j += k){
            if(j&1){
                ans[j] = l;
                l--;
            }
            else {
                ans[j] = f;
                f++;
            }
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