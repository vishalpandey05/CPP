//author : Zenith
// 2023-06-06 20:11:28

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n;
    cin >> n;
    string s, str = "";
    cin >> s;

    int i = 0, j = 1;
    while(i < n & j < n){
        if(s[i] == s[j]){
            str += s[j];
            i = j+1;
            j += 2;
        }
        else j++;
    }
    cout << str << endl;
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