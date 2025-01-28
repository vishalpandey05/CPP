//author : Zenith
// 2025-01-28 22:50:37

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    // int n; cin >> n;
    vector<vector<char>> arr(10, vector<char> (10));
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            char x; cin >> x;
            arr[i][j] = x;
        }
    }
    int ans = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(arr[i][j] == 'X'){
                if(i == 0 || i == 9 || j == 0 || j == 9) ans += 1;
                else if (i == 1 || i == 8 || j == 1 || j == 8) ans += 2;
                else if (i == 2 || i == 7 || j == 2 || j == 7) ans += 3;
                else if (i == 3 || i == 6 || j == 3 || j == 6) ans += 4;
                else ans += 5;
            }
        }
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