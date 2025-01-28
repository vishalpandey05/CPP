//author : Zenith
// 2024-07-19 01:56:59

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    string s, t; cin >> s >> t;
    if(s == t) cout << "YES\n";
    else if(n == 1 and s[0] == '0') cout << "NO\n";
    else{
        if(s[0] == '1' || s[1] == '1') cout << "YES\n";
        else cout << "NO\n";
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