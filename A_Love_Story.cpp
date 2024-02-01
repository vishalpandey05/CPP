//author : Zenith
// 2023-05-25 14:32:21

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int cnt = 0;
        string str = "codeforces";
        string s; cin >> s;
        for(int i = 0; i<10; i++){
            if(s[i] != str[i]) cnt++;
        }
        cout << cnt << endl;
    }
}