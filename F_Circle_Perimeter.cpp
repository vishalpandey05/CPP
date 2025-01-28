//author : Zenith
// 2024-05-13 11:57:39

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int f(int x){
    int cnt = 0;
    for(int i = 0; i <= x; i++){
        int y = sqrtl(x*x - i*i);
        cnt += y;
        if(i*i + y*y == x*x) cnt--;
    }
    return cnt;
}

void solve(){
    int r; cin >> r;
    int ans = f(r+1) - f(r);
    cout << 4*ans << endl;
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