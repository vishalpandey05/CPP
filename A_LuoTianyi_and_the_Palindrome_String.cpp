//author : Zenith
// 2023-05-27 19:24:54

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    string s; cin >> s;
    unordered_set<int> st;
    for(auto& it : s){
        st.insert(it);
    }
    if(st.size() == 1){
        cout << "-1\n";
        return;
    }
    else{
        cout << s.length()-1 << endl;
        return;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}