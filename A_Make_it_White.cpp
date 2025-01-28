//author : Zenith
// 2024-02-06 20:18:02

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0, ind1 = 0, ind2 = 0;
    for(int i = 0; i < n; i++){
        if(s[i] =='B' and cnt == 0){
            ind1 = i;
            ind2 = i;
            cnt++;
        }
        else if(s[i] == 'B' and cnt > 0){
            ind2 = i;
        }
    }

    if(cnt == 0) cout << 0 << endl;
    else {
        cout << ind2 - ind1 + 1 << endl;
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