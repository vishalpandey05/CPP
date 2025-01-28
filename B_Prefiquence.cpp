//author : Zenith
// 2024-05-04 14:59:51

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    string a, b; cin >> a >> b;

    int i = 0, j = 0, ans = 0;
    while(i < a.length() and j < b.length()){
        if(a[i] == b[j]) {
            ans++, i++, j++;
        }
        else j++;
    }
    cout << ans << endl;
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