//author : Zenith
// 2023-12-18 22:09:56

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    string s; cin >> s;
    int n = s.length();
    vector<int> cnt(2, 0);
    for(int i = 0; i < n; i++){
        cnt[s[i]-'0']++;
    }
    for(int i = 0; i < n; i++){
        int req = !(s[i]-'0');
        if(cnt[req] == 0){
            cout << n - i << endl;
            return;
        }
        cnt[req]--;
    }
    cout << 0 << endl;
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