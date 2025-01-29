//author : Zenith
// 2023-06-29 20:08:08

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k, x; cin >> n >> k >> x;
    if(x != 1){
        cout << "YES\n";
        cout << n << endl;
        for(int i = 0; i < n; i++){
            cout << 1 << " ";
        }
        cout << endl;
    }
    else{
        if(((n&1) and (k<3)) || (k == 1)) cout << "NO\n";
        else{
            cout << "YES\n";
            if(!(n&1)){
                cout << n/2 << endl;
                for(int i = 0; i<n/2; i++) cout << 2 << " ";
                cout << endl;
            }
            else {
                cout << n/2 << endl;
                for(int i = 0; i<n/2 -1; i++) cout << 2 << " ";
                cout << 3 << endl;
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