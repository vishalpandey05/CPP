//author : Zenith
// 2024-02-01 01:07:56

#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool cmp(pair<int, int> &a, pair<int, int> &b){
    if(a.first > b.first) return true;
    else if(a.first == b.first) return a.second < b.second;
    else return false;
}

void solve(){
    int n, k; cin >> n >> k;
    int arr[n];
    vector<pair<int, int>> v; 
    for(int i = 0; i<n; i++) cin >> arr[i];
    for(int i = 0; i<n; i++) {
        arr[i] %= k;
        if(arr[i] % k == 0) arr[i] = k;
        v.push_back({arr[i], i+1});
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; i++){
        cout << v[i].second << " ";
    }
    cout << endl;
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