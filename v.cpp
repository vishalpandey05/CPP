//author : Zenith
// 2024-01-23 19:53:42
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
void solve(){
    int n; cin >> n;
    multiset<int> s;
    for(int i = 0; i<n; i++) {
        int x; cin >> x;
        auto it = s.upper_bound(x);
        if(it == s.end()) s.insert(x);
        else{
            s.erase(it);
            s.insert(x);
        }
    }
    cout << s.size() << endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}