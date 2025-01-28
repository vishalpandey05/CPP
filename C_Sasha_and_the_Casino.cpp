//author : Zenith
// 2024-02-16 01:47:41

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int k, x, a; cin >> k >> x >> a;
    int bet = 0, loss = 0;
    
    for(int i = 0; i <= x; i++){
        bet = loss/(k-1) + 1;
        loss += bet;
        if(loss > a) {
            cout << "no\n";
            return;
        }
    }
    cout << "yes\n";
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