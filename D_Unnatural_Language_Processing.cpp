//author : Zenith
// 2023-12-28 20:39:55

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, x; cin >> n;
    string s, ans = ""; cin >> s;
    while(!s.empty()){
        if(s.back() == 'a' || s.back() == 'e'){
            x = 2;
        }
        else x = 3;
        while(x--){
            ans += s.back();
            s.pop_back();
        }
        ans += '.';
    }
    ans.pop_back();
    reverse(ans.begin(), ans.end());
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