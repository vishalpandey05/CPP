//author : Zenith
// 2024-02-10 13:59:45

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, q; cin >> n >> q;
    vector<int> arr(n), query(q);
    for(int i = 0; i<n; i++) cin >> arr[i];
    for(int i = 0; i<q; i++) cin >> query[i];
    set<int> s;

    for(int i = 0; i < q; i++){
        if(s.count(query[i])) continue;
        s.insert(query[i]);
        for(int j = 0; j < n; j++){
            if(arr[j] % (1 << query[i]) == 0){
                arr[j] += (1 << (query[i] - 1));
            }
        }
    }
    for(auto &it : arr) cout << it << " ";
    cout << "\n";
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