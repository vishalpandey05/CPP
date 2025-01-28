//author : Zenith
// 2024-02-23 20:18:04

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n, k;
    int a[n], x[n];
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<n; i++) cin >> x[i];

    vector<pair<int,int>> s(n);

    for(int i = 0; i < n; i++){
        s[i].first = a[i];
        s[i].second = abs(x[i]);
    }
    sort(s.begin(), s.end());

    int sum = 0;
    bool flag = true;
    for(auto it : s){
        sum += it.second;
        int time = (sum + k - 1)/k;
        if(time > it.first){
            flag = false;
        }
    }
    cout << (flag ? "YES\n" : "NO\n");
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