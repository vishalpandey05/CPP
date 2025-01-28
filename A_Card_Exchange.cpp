//author : Zenith
// 2024-04-28 07:24:29

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];

    unordered_map<int, int> m;
    for(int i= 0; i < n; i++) m[arr[i]]++;
    for(auto it : m){
        if(it.second >= k){
            cout << k-1 << endl;
            return;
        }
    }
    cout << n << endl;
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