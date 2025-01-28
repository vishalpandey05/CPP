//author : Zenith
// 2024-03-28 20:18:51

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    vector<vector<char>> ans(2*n, vector<char>(2*n));
    char a = '#', b = '.';
    for(int i = 0; i < 2*n; i++){
        for(int j = 0; j < 2*n; j++){
            if(i % 4 == 0 || i % 4 == 1){
                if(j % 4 == 0 || j % 4 == 1){
                    ans[i][j] = a;
                }
                else ans[i][j] = b;
            }
            else{
                if(j % 4 == 0 || j % 4 == 1){
                    ans[i][j] = b;
                }
                else ans[i][j] = a;
            }
        }
    }
    for(int i = 0; i < 2*n; i++){
        for(int j = 0; j < 2*n; j++){
            cout << ans[i][j];
        }
        cout << endl;
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