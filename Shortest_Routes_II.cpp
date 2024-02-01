//author : Zenith
// 2023-10-12 03:07:42

#include <bits/stdc++.h>
using namespace std;
#define int long long int

vector<pair<int, int>> adj[100005];

int bfs(int s, int v, vector<int> &dist){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    vector<int> vis(100005, 0);
    q.push({0, s});
    dist[s] = 0;

    while(!q.empty()){
        auto node = q.top().second;
        int d = q.top().first;
        q.pop();
        if(d > dist[node]) continue;
        if(vis[node]) continue;
        vis[node] = 1;

        for(auto it : adj[node]){
            int x = it.first;
            int y = it.second;
            if(d + y < dist[x]){
                dist[x] = d + y;
                q.push({dist[x], x});
            }
        }
    }
    return dist[v];
}
void solve(){
    int n, m, q; cin >> n >> m >> q;
    for(int i = 0; i< m; i++){
        int u, v, k; cin >> u >> v >> k;
        adj[u].push_back({v, k});
        adj[v].push_back({u, k});
    }
    
    vector<int> dist(100005, LLONG_MAX);
    while(q--){
        int u, v; cin >> u >> v;
        int ans = bfs(u, v, dist);
        if(ans != LLONG_MAX) cout << ans << endl;
        else cout << -1 << endl;
    }
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}