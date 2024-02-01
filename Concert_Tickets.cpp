//author : Zenith
// 2024-01-16 01:20:02

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    multiset<int, greater<int>> st;
    for(int i = 0; i<n; i++) {
        cin >> a[i];
        st.insert(a[i]);
    }
    for(int i = 0; i<m; i++) cin >> b[i];

    for(int i = 0; i < m; i++){
        auto it = st.lower_bound(b[i]);
        if(it == st.end()){
            cout << -1 << endl;
        }
        else {
            cout << *it << endl;
            st.erase(it);
        }
    }

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}