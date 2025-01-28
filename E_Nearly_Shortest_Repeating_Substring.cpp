//author : Zenith
// 2024-03-29 12:44:07

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    for(int i = 1; i <= n; i++){
        int cnt = 2;
        if(n % i == 0){
            for(int j = 0; j < i; j++){
                for(int k = j+i; k < n; k += i){
                    if(s[j] != s[k]) cnt--;
                }
            }
            if(cnt > 0){
                cout << i << endl;
                return;
            }

            cnt = 2;
            for(int j = n-i; j < n; j++){
                for(int k = j-i; k >= 0; k -= i){
                    if(s[k] != s[j]) cnt--;
                }
            }
            if(cnt > 0){
                cout << i << endl;
                return;
            }
        }
    }
    cout << n << endl;
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