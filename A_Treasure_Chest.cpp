//author : Zenith
// 2023-11-03 20:09:03

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int x, y, k; cin >> x >> y >> k;
    if(x >= y) cout << x << endl;
    else{
        if(x + k >= y) cout << y << endl;
        else {
            cout << y + (y - x - k) << endl;
        }
    }
    
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