//author : Zenith
// 2023-10-05 13:02:34

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void dfs(int s, vector<int> adj[], vector<bool>& vis){
    vis[s] = true;
    for(auto it : adj[s]){
        if(!vis[it]){
            dfs(it, adj, vis);
        }
    }
}

void solve(){
    int n, m; cin >> n >> m;
    vector<int> adj[n+1];
    vector<int> ans;
    for(int i = 0; i<m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    vector<bool> vis(n, false);
    for(int i = 1; i <=n ; i++){
        if(!vis[i]){
            ans.push_back(i);
            dfs(i, adj, vis);
        }
    }
    cout << ans.size()-1 << endl;;
    for(int i = 0; i < ans.size()-1; i++){
        cout << ans[i] << " " << ans[i+1] << endl;
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}