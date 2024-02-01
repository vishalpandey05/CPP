//author : Zenith
// 2023-05-25 13:12:59

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int& it : v) cin >> it;
        vector<int> :: iterator it;
        it = unique(v.begin(), v.end());
        n = it - v.begin();

        int ans = n;
        for(int i = 0; i+2 < n; i++){
            ans -= (v[i] > v[i+1] and v[i+1] > v[i+2]);
            ans -= (v[i] < v[i+1] and v[i+1] < v[i+2]);
        }
        cout << ans << endl;
    }
}