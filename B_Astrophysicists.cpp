//author : Zenith
// 2023-06-18 21:09:51

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k, g;
    cin >> n >> k >> g;

    int res = ((g+1)/2)-1;
    int total = k * g;

    if(res*n >= total){
        cout << total << endl;
        return;
    }
    int x = total - (res*(n-1));
    int r = x % g;
    int val = 0;
    if(r >= ((g+1)/2)) val = x + g - r;
    else val = x - r;
    cout << total - val << endl;

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