//author : Zenith
// 2023-12-28 20:11:18

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n = 3;
    char arr[n][n];
    for(int i = 0; i<n; i++) {
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    unordered_map<char, int> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            m[arr[i][j]]++;
        }
    }
    for(auto it : m){
        if(it.second == 2){
            cout << it.first << endl;
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