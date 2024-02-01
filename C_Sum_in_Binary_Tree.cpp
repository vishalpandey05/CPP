//author : Zenith
// 2023-06-29 17:39:15

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int sum = n;
    while(n){
        sum += n/2;
        n /= 2;
    }
    cout << sum << endl;
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