//author : Zenith
// 2023-10-11 19:58:32

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    vector<int>adj[n+1];
    vector<int> indegree(n+1, 0);

    for(int i = 0; i < k; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        indegree[v]++;
    }

    int cnt = 0;
    queue<int> q;
    for(int i = 1; i <= n; i++){
        if(indegree[i] == 0) q.push(i);
    }
    vector<int> v;
    while(!q.empty()){
        auto node = q.front();
        v.push_back(node);
        cnt++;
        q.pop();

        for(auto it : adj[node]){
            indegree[it]--;
            if(indegree[it] == 0){
                q.push(it);
            }
        }
    }
    if(cnt < n){
        cout << "IMPOSSIBLE";
    }
    else{
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}