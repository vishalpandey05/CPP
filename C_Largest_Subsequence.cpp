//author : Zenith
// 2023-06-29 20:46:56

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    
    unordered_map<char, int> cnt;
    for(auto c : s) cnt[c]++;
    
    vector<int> v(n, 0);
    string t;
    for(int i = 0; i < n; i++){
        char maxi = 'a';
        for(char c = 'a'; c <= 'z'; c++){
            if(cnt[c] > 0) maxi = c;
        }
        
        if(s[i] == maxi){
            t.push_back(maxi);
            v[i] = 1;
        }
        cnt[s[i]]--;
    }

    int ans = 0;
    for(char c = 'z'; c >= 'a'; c--){
        if(count(t.begin(), t.end(), c) > 0){
            ans -= count(t.begin(), t.end(), c);
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(v[i]){
            ans++;
            s[i] = t.back();
            t.pop_back();
        }
    }
    if(is_sorted(s.begin(), s.end())) cout << ans << endl;
    else cout << -1 << endl;
    
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