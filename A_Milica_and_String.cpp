//author : Zenith
// 2023-11-24 19:07:35

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'B') cnt++;
    }
    int cnt1 = 0;
    if(k == cnt){
        cout << 0 << endl;
    }
    else if(k > cnt){
        for(int i = 0; i < n; i++){
            if(s[i] == 'A'){
                cnt1++;
            }
            if(cnt1 == k - cnt){
                cout << 1 << endl;
                cout << i+1 << " " << "B" << endl;
                return;
            }
        }
    }
    else {
        cnt1 = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'B'){
                cnt1++;
            }
            if(cnt1 == cnt - k){
                cout << 1 << endl;
                cout << i+1 << " " << "A" << endl;
                return;
            }
        }
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