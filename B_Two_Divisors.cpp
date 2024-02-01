//author : Zenith
// 2023-12-30 20:28:01

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    if(n == 1) cout << k*k << endl;
    else if(k % n == 0){
        cout << k * (k/n) << endl;
    }
    else{ 
        if(__gcd(n, k) != 1){
            cout << n*(k/(__gcd(n, k))) << endl;
        }
        else cout << n * k << endl;
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