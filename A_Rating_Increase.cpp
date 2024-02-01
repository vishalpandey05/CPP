//author : Zenith
// 2023-12-18 20:11:44

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    string s; cin >> s;
    int n = s.size();
    string s1 = "", s2 = "";
    int i = 0;
    //while(s[i] == 0) i++;

    s1 += s[i++];
    
    while(i < n){
        if(s[i] == '0') {
            s1 += '0';
        }
        else{
            while(i < n){
                s2 += s[i++];
            }
        }
        i++;    
    }
    if(s2.empty() || (stoi(s1) >= stoi(s2))){
        cout << -1 << endl;
    }
    else cout << s1 << " " << s2 << endl;
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