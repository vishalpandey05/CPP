//author : Zenith
// 2023-08-24 20:08:22

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, m; cin >> n >> m;
    char mat[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> mat[i][j];
        }
    }
    int ind = 0;
    string s = "vika";
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
           if(mat[j][i] == s[ind]){
           ind++;
           j=n;
           }
        }
        if(ind == 4) break;
    }
    if(ind == 4) cout << "yes\n";
    else cout << "no\n";
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