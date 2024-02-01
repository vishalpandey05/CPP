//author : Zenith
// 2024-01-15 20:08:04

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    vector<vector<int>> arr(4, vector<int>(2));
    for(int i = 0; i < 4; i++){
        int x, y; cin >> x >> y;
        arr[i][0] = x, arr[i][1] = y; 
    }
    sort(arr.begin(), arr.end());
    for(int i = 1; i < 4; i++){
        if(arr[i][0] == arr[i-1][0]){
            cout << (abs(arr[i][1]-arr[i-1][1])) * (abs(arr[i][1]-arr[i-1][1])) << endl;
            return;
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