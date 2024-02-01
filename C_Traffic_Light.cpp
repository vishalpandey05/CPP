//author : Zenith
// 2023-08-21 19:20:38

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;

    string str = "$" + s + s;
    int idx_g = -1, ans = 0;
    for(int i = 2*n; i > 0; i--){
        if(str[i] == 'g') idx_g = i;
        else if (str[i] == c) ans = max(ans, idx_g - i);
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