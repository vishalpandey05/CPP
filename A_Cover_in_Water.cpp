//author : Zenith
// 2023-11-26 20:11:08

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0, ans = 0, res = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '.'){
            cnt++;
        }
        else{
            res += cnt;
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    ans = max(ans, cnt);
    res += cnt;
    if(ans > 2) cout << 2 << endl;
    else cout << res << endl;

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