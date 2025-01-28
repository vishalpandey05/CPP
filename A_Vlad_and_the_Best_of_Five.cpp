//author : Zenith
// 2024-02-23 18:51:44

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A') cnt++;
    }
    if(cnt > s.size()/2) cout <<  "A" << endl;
    else cout << "B" << endl;
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