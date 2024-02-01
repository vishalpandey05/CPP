//author : Zenith
// 2023-10-28 20:43:21

#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool dfs(int node, vector<int> &vis, int col, vector<int> adj[]){
    vis[node] = col;
    for(auto it : adj[node]){
        if(vis[it] == -1){
            if(dfs(it, vis, !col, adj) == false) return false;
        }
        else if(vis[it] == col){
            return false;
        }
    }
    return true;
}
bool solve(int n, int m, vector<int> adj[], vector<int> &vis){
   
    for(int i = 1; i <= n; i++){
        if(vis[i] == -1){
            if((dfs(i, vis, 1, adj)) == false){
               return false;
            }
        }
    }
    return true;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    vector<int>adj[n+1];
    for(int i = 0; i<m; i++){
        int u,v;  cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> vis(n+1, -1);

    bool flag = solve(n, m, adj, vis);
    if(!flag){
        cout << "IMPOSSIBLE";
    }
    else{
        for(int i = 1; i <= n; i++){
            if(vis[i] == 1) cout << 1 <<  " ";
            else cout << 2 << " ";
        }
    }
}