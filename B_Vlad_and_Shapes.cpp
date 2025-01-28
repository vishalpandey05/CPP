//author : Zenith
// 2024-02-23 19:06:02

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    vector<vector<char>> arr(n, vector<char> (n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            char x; cin >> x;
            arr[i][j] = x;
        }
    }
    set<int> s;
    
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(arr[i][j] == '1') cnt++;
        }
        //cout << cnt << endl;
        if(cnt != 0 and s.find(cnt) != s.end()){
            cout << "SQUARE\n";
            return;
        }
        s.insert(cnt);
    }
    cout << "TRIANGLE\n";
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