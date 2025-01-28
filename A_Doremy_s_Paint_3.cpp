//author : Zenith
// 2025-01-28 23:40:28

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    set<int> st;
    int arr[n];
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr[i] = x;
        st.insert(x);
    }
    if(st.size() == 1) cout << "YES\n";
    else if(st.size() == 2){
        int a = *st.begin();
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == a) cnt++;
        }
        if((n % 2 == 0 and cnt == (n/2)) || (n % 2 == 1 and (cnt == (n/2) || cnt == (n/2 + 1)))) cout << "YES\n";
        else cout << "NO\n";
    }
    else cout << "NO\n";
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