//author : Zenith
// 2023-10-06 17:52:54

#include <bits/stdc++.h>
using namespace std;
#define int long long int

vector<int> ans;

void bfs(int s, vector<int> adj[], vector<bool>& vis, int n, vector<int> &parent){
    queue<int> q;
    q.push(s);

    while(!q.empty()){
        auto node = q.front();
        vis[node] = true;
        q.pop();
        if(node == n) return;

        for(auto it : adj[node]){
            if(!vis[it]){
                parent[it] = node;
                vis[it] = true;
                q.push(it);
            }
        }
    }
}

void solve(){
    int n, m; cin >> n >> m;
    vector<int>adj[n+1];
    for(int i = 0; i<m; i++){
        int u,v;  cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> parent(n+1, -1);
    vector<bool> vis(n+1, false);
    bfs(1, adj, vis, n, parent);

    if(vis[n] == false){
        cout << "IMPOSSIBLE";
        return;
    }

    ans.push_back(n);
    int a = n;
    while(a != 1){
        a = parent[a];
        ans.push_back(a);
    }
    cout << ans.size() << endl;
    for(int i = ans.size()-1; i >= 0; i--){
        cout << ans[i] << " ";
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}