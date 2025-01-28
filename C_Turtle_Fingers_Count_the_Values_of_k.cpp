//author : Zenith
// 2024-02-27 21:00:12

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int a, b, l; cin >> a >> b >> l;
    int ans = 0;
    if(l % a and l % b){
        cout << 1 << endl;
        return;
    }
    if(a == b){
        while(l % b == 0){
            ans++;
            l /= b;
        }
        cout << ans+1 << endl;
        return;
    }
    set<int> st;
    int temp = l;
    for(int i = 0; i < 21; i++){
        int x = pow(a, i);
        if(x > l) break;
        temp = l;
        if(temp % x == 0){
            ans++;
            temp /= x;
            st.insert(temp);
            while(temp % b == 0){
                ans++;
                temp /= b;
                st.insert(temp);
            }
        }
    }
    cout << st.size() << endl;
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