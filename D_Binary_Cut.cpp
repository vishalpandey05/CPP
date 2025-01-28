//author : Zenith
// 2024-05-10 20:37:04

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    string s; cin >> s;
    int ans = 0, cnt = 0;
    char prev = s[0];
    for(int i = 1; i < s.size(); i++){
        if(prev == '1' and s[i] == '0') ans++;
        if(prev == '0' and s[i] == '1') cnt++;
        prev = s[i];
    }
    if(cnt >= 1) cnt--;
    cout << (ans+1)+cnt << endl;
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