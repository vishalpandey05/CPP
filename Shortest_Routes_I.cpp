//author : Zenith
// 2023-10-12 03:07:42

#include <bits/stdc++.h>
using namespace std;
#define int long long int

vector<int> vis(100005, 0);

void solve(){
    int n, m; cin >> n >> m;
    vector<pair<int, int>> adj[100005];
    vector<int> dist(100005, LONG_MAX);

    for(int i = 0; i< m; i++){
        int u, v, k; cin >> u >> v >> k;
        adj[u].push_back({v, k});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, 1});
    dist[1] = 0;

    while(!q.empty()){
        auto node = q.top().second;
        int d = q.top().first;
        q.pop();
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
    for(int i = 1; i <= n; i++){
        cout << dist[i] << " ";
    }
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}