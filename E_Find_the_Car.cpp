//author : Zenith
// 2024-05-10 21:04:35

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k, q; cin >> n >> k >> q;
    int a[k+1], b[k+1];
    a[0] = 0, b[0] = 0;
    for(int i = 1; i<=k; i++) cin >> a[i];
    for(int i = 1; i<=k; i++) cin >> b[i];
    
    k++;
    while(q--){
        int d; cin >> d;
        int ind = lower_bound(a, a+k, d) - a;
        if(d == a[ind]){
            cout << b[ind] << " ";
            continue;
        }
        ind--;
        int time = b[ind] + (b[ind+1] - b[ind])*(d-a[ind])/(a[ind+1]-a[ind]);
        cout << time << " ";
    }
    cout << endl;
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