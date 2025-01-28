//author : Zenith
// 2025-01-28 23:16:55

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector<int> ans;
    ans.push_back(arr[0]);
    for(int i = 1; i < n; i++){
        if(arr[i] >= arr[i-1]) ans.push_back(arr[i]);
        else{
            ans.push_back(1);
            ans.push_back(arr[i]);
        }
    }
    cout << ans.size() << endl;
    for(auto it : ans) cout << it << " ";
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