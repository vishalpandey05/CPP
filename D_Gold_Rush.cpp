//author : Zenith
// 2023-05-26 21:29:34

#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool check(int n, int m){
    if(n == m) return true;
    else if(n % 3 != 0) return false;
    else return {check(n/3, m) || check(2*n/3, m)};
}

void solve(){
    int n, m;
    cin >> n >> m;
    cout << (check(n, m) ? "YES" : "NO") << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}