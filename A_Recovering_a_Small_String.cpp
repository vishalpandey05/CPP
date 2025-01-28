//author : Zenith
// 2024-02-13 20:07:00

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int cnt = n/26, rem = n%26;
    string ans = "";
    if(n <= 28){
        ans += "aa";
        ans += 'a' + (n-3);
    }
    else if(n <= 53){
        n -= 28;
        ans += 'a';
        ans += 'a' + n;
        ans += 'z';
    }
    else{
        n -= 53;
        ans += 'a' + n;
        ans += "zz";
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