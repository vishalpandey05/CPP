//author : Zenith
// 2023-11-03 01:27:59

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int x, y; cin >> y >> x;
    int maxi = max(x, y);
    int last = (maxi-1)*(maxi-1);
    if(maxi & 1){
        if(x < y){
            cout << last + x << endl;
        }
        else{
            cout << maxi * maxi - y + 1 << endl;
        }
    }   
    else{
        if(x < y){
            cout << maxi * maxi - x + 1 << endl;
        }
        else{
            cout << last + y << endl;
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