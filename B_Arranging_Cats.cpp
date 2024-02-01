//author : Zenith
// 2024-01-15 20:18:26

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    
    string s, f; 
    cin >> s >> f;

    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1' and f[i] == '0') cnt1++;
        if(f[i] == '1' and s[i] == '0') cnt2++;
    }
    cout << max(cnt1, cnt2) << endl;

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