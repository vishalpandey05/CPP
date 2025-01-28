//author : Zenith
// 2024-05-01 13:24:23

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == 'U') cnt++;
    }
    if(cnt & 1) cout << "YES\n";
    else cout << "NO\n";
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