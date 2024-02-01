//author : Zenith
// 2023-05-25 14:44:36

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int a = 1, b = 1, time1 = INT_MAX, time2 = INT_MAX, ans = INT_MAX;
    while(n--){
        int x; cin >> x;
        string s; cin >> s;

        if(s[0] == '1' and s[1] == '1') {ans = min(ans, x); a--, b--;}
        else if(s[0] == '1' and s[1] == '0') {time1 = min(time1, x); a--;}
        else if(s[0] == '0' and s[1] == '1') {time2 = min(time2, x); b--;}
    }
    ans = min(ans, time1+time2);
    
    if(a <= 0 and b <= 0) cout << ans << endl;
    else cout << -1 << endl;
    return;
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