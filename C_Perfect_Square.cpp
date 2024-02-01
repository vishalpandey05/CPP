//author : Zenith
// 2023-10-12 21:16:29

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    vector<string> v;
    for(int i = 0; i<n; i++) {
        string s; cin >> s;
        v.push_back(s);
    }
    int cnt = 0;
    vector<int>arr(4);
    for(int i = 0; i<n/2; i++){
        for(int j = i; j<n-i-1; j++){
            int a = v[i][j] - 'a';
            int b = v[j][n-i-1] - 'a';
            int c = v[n-i-1][n-j-1] - 'a';
            int d = v[n-j-1][i] - 'a';
            arr[0] = a, arr[1] = b, arr[2] = c, arr[3] = d;
            sort(arr.begin(), arr.end());
            cnt += (3 * arr[3] - arr[0] - arr[1] - arr[2]);
        }
    }
    cout << cnt << endl;
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