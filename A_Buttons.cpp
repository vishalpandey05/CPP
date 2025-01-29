//author : Zenith
// 2025-01-29 09:33:31

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int a, b, c; cin >> a >> b >> c;
    if(c % 2 == 0){
        if((c/2)+ + a > b + (c/2)) cout << "First\n";
        else cout << "Second\n";
    } else{
        if((c/2)+1 + a > b + (c/2)) cout << "First\n";
        else cout << "Second\n";
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