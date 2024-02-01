//author : Zenith
// 2023-10-12 20:10:05

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, m; cin >> n >> m;
    string s1, s2; cin >> s1 >> s2;
    int size = ceil((double)(log2(m+1)));

    //cout << "^" << size << endl;

    int cnt = 0;
    for(int i = 0; i<=size; i++){
        if(s1.find(s2) != -1) {
            cout << cnt << endl;
            return;
        }
        s1 += s1;
        cnt++;
    }
    cout << -1 << endl;
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