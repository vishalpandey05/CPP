//author : Zenith
// 2024-04-30 15:45:03

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    string s; cin >> s;
    int one = 0, ans = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1') one++;
        else {
            if(one > 0){
                ans += (one+1);
            }
        }
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