//author : Zenith
// 2024-02-17 01:29:06

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    vector<pair<int,int>> v;
    for(int i = 0; i<n; i++) {
        int x; cin >> x;
        v.push_back({x, i+1});
    }
    //sort(v.begin(), v.end());
    map<int, int> m;
    for(int i = 0; i < n; i++) m[k-v[i].first] = i+1;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(m.find(v[i].first + v[j].first) != m.end() and m[v[i].first+v[j].first] != v[i].second and  m[v[i].first+v[j].first] != v[j].second){
                cout << v[i].second << " " << v[j].second << " " << m[v[i].first+v[j].first];
                return;
            }
        }
    }
    cout << "IMPOSSIBLE";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}