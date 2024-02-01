//author : Zenith
// 2023-06-29 20:46:56

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int a, b, x, y, n, m; cin >> a >> b >> x >> y >> n >> m;
    int ans = 0, cnt1 = 0;
    if(x < a && n < a)
    {    
        cnt1 = min(abs(x - a),abs(n - a));
        ans += cnt1;
        cnt1 = 0;
    }
    else{
        cnt1 = min((x - a),(n - a));
        if(cnt1 < 0) cnt1 += 0;
        else ans += cnt1;
        cnt1 = 0;
    }
    if(y < b && m < b)
    {    
        cnt1 = min(abs(y - b), abs(m - b));
        if(cnt1 < 0) cnt1 += 0;
        else ans += cnt1;
    }
    else{
        cnt1 = min(y - b, m - b);
        if(cnt1 < 0) cnt1 += 0;
        else ans += cnt1;
    }
    cout << ans + 1 << endl;
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