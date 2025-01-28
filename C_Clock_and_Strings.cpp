//author : Zenith
// 2024-05-10 20:16:41

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int a, b, c, d; cin >> a >> b >> c >> d;

    if(a != 12 and b != 12){
        if((c >= min(a, b) and c <= max(a, b) and (d >= max(a, b) || d <= min(a, b))) || (d >= min(a, b) and d <= max(a, b) and (c >= max(a, b) || c <= min(a, b)))){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    else{
        if(a == 12 and b != 12){
            if(c >= 1 and c <= b and (d <= 12 and d >= b)){
                cout << "YES\n";
            }
            else if(d >= 1 and d <= b and (c <= 12 and c >= b)){
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
        else{
            if(c >= 1 and c <= a and (d <= 12 and d >= a)){
                cout << "YES\n";
            }
            else if(d >= 1 and d <= a and (c <= 12 and c >= a)){
                cout << "YES\n";
            }
            else cout << "NO\n";
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