//author : Zenith
// 2025-01-31 00:48:48

#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool check(int n){
    string s = to_string(n);
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '0') cnt++;
    }
    return cnt == 1;
}
void solve(vector<int> &st){
    int n; cin >> n;
    int ans = 0;
    for(auto it : st){
        if(it <= n) ans++;
    }
    cout << ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> st;
    for(int i = 1; i < 1000000; i++){
        if(check(i)) st.push_back(i);
    }
    int t;
    cin >> t;
    while(t--){
        solve(st);
    }
}