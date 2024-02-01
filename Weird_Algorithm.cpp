//author : Zenith
// 2023-10-05 02:00:05

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    cout << n << " ";
    while(n != 1){
        if(n & 1){
            n *= 3;
            n++;
        }
        else {
            n /= 2;
        }
        cout << n << " ";
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}