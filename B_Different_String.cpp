//author : Zenith
// 2024-05-10 20:07:52

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    string s; cin >> s;
    unordered_set<int> st;
    for(int i = 0; i < s.length(); i++){
        st.insert(s[i]);
    }
    if(st.size() == 1) cout << "NO\n";
    else{
        cout << "YES\n";
        char c = s[0];
        int ind;
        string str = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] != c){
                str += s[i];
                ind = i;
                break;
            }
        }
        for(int i = 0; i < s.length(); i++){
            if(i == ind) continue;
            else str += s[i];
        }
        cout << str << endl;
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