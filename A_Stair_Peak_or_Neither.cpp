//author : Zenith
// 2024-03-28 20:15:55

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int a, b, c; cin >> a >> b >> c;
    if(a < b and b < c) cout << "STAIR\n";
    else if(a < b and b > c) cout << "PEAK\n";
    else cout << "NONE\n";
    
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