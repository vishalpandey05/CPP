//author : Zenith
// 2023-12-19 20:42:40

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int f(){

}

void solve(){
    int n; cin >> n;
    int a[n], b[n], c[n];
    for(int i = 0; i<n; i++) cin >> a[i];

    multiset<pair<int, int>> x, y;
    for(int i = 0; i<n; i++) {
        cin >> b[i];
        x.insert({b[i], i});
    }
    for(int i = 0; i<n; i++) {
        cin >> c[i];
        y.insert({c[i], i});
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        x.erase({b[i], i});
        y.erase({c[i], i});

        if(*(x.rbegin()).second == *(y.rbegin()).second){
            ans = max(ans, max((a[i] + (*(--(x.end()))).first + (*(--(--y.end()))).first), (a[i] + (*(--(y.end()))).first + (*(--(--x.end()))).first)));
        }
        else ans = max(ans, a[i] + (*(--(y.end()))).first + (*(--(x.end()))).first);
        x.insert({b[i], i});
        y.insert({c[i], i});
    }
    cout << ans << endl;
    //sort(a, a+n); sort(b, b+n); sort(c, c+n);


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