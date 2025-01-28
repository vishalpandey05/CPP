//author : Zenith
// 2024-03-28 20:29:27

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    string s; cin >> s;
    if(s[0] == '1' and s[1] == '2'){
        cout << s[0] << s[1] << s[2] << s[3] << s[4] << " " << "PM\n";
    }
    else if (s[0] == '0' and s[1] == '0'){
        cout << 12 << s[2] << s[3] << s[4] << " " << "AM\n";
    }
    else if((s[0] < '1' )|| (s[0] == '1' and s[1] < '2')){
        cout << s[0] << s[1] << s[2] << s[3] << s[4] << " " << "AM\n";
    }
    else{
        string res = "";
        res += s[0]+s[1];
        int q = 0;
        q += ((s[0]-'0')*10 + (s[1]-'0'));
        q -= 12;
        res = to_string(q);
        if(q < 10){
            cout << 0;
        }
        cout << res << s[2] << s[3] << s[4] << " " << "PM\n";
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