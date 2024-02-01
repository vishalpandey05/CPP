//author : Zenith
// 2023-12-16 20:31:31

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    vector<int> adj[n+1];
    int cnt = 0;
    for(int i = 0; i < n-1; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        if(adj[i].size() == 1) cnt++;
    }
    int ans = 1;
    cnt -= 2;
    ans += (cnt+1)/2;
    cout << ans << endl; 
    
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