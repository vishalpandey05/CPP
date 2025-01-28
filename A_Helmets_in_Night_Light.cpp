//author : Zenith
// 2024-05-05 14:41:42

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    int a[n], b[n];
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<n; i++) cin >> b[i];

    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        v.push_back({b[i], a[i]});
    }
    v.push_back({k, n});
    sort(v.begin(), v.end());
    int cost = k, ind = 0;
    n--;
    while(n > 0){
        int val = min(n, v[ind].second);
        cost += v[ind].first * val;
        n -= val;
        ind++;
    }
    cout << cost << endl;
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