//author : Zenith
// 2023-09-28 12:09:57

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> distance(v, INT_MAX);
    distance[s] = 0;
    pq.push({0, s});

    while(!pq.empty()){
        auto node = pq.top().second;
        int dist = pq.top().first;
        pq.pop();

        for(auto it : adj[node]){
            int u = 
        }
    }
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