//author : Zenith
// 2024-07-15 22:01:32

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    string str = "";
    for(int i = 0; i < n; i++){
        if(s[i] == '1') str += '1';
        else {
            if(str.back() == '1' || str.empty()) str += '0';
        }
    }
    int cnt = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '1') cnt++;
    }
    if(cnt*2 > str.size()) cout << "Yes\n";
    else cout << "No\n";
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