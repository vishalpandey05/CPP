//author : Zenith
// 2024-03-30 11:23:58

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int a, b, c; cin >> a >> b >> c;
    if(c != a+1){
        cout << -1 << endl;
        return;
    }
    int h = log2(2*c-1);
    int d = 1 << h;
    d -= c;
    b = max(b-d, 0ll);
    h += (b+c-1)= c;
    cout << h << endl;
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