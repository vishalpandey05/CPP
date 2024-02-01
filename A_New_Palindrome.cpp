//author : Zenith
// 2023-05-23 18:01:27

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        unordered_set<char> st;
        int cnt = 0;
        for(int i = 0; i< s.size(); i++){
            st.insert(s[i]);
            if(s[i] == s[0]) cnt++;
        }
        if(st.size() == 1) cout << "NO\n";
        else if(st.size() > 2) cout << "YES\n";
        else{
            if(cnt == 1 || cnt == s.length()-1) cout << "NO\n";
            else cout << "YES\n";
        }
    }
}