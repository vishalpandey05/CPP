//author : Zenith
// 2024-07-12 21:20:05

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    map<int, vector<int>> m;
    for(int i = 0; i < n; i++){
        m[arr[i]].push_back(i);
    }

    int ans = INT_MAX;
    for(auto it : m){
        vector<int> temp;
        int ind = -1, mx = 0;
        if(it.second.size() == 0) continue;
        for(auto nums : it.second){
            temp.push_back(nums-ind-1);
            ind = nums;
        }
        temp.push_back(n-ind-1);
        sort(temp.rbegin(), temp.rend());
        if(temp[0] & 1) temp[0] /= 2;
        else temp[0] = (temp[0] + 1)/2;
        mx = max(temp[0], temp[1]);
        ans = min(ans, mx);
    }
    cout << ans << endl;
    
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