//author : Zenith
// 2024-09-25 17:10:26

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int t;
    cin >> t;
    string s; cin >> s;
    int i = 1;
    while(i < t){
        if(s[i] < s[i-1]){
            cout << "YES\n";
            cout << i << " " << i+1 << endl;
            return;
        }
        i++;
    }
    cout << "NO\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}