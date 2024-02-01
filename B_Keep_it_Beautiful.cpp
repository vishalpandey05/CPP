//author : Zenith
// 2023-06-12 20:38:55

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int q; cin >> q;
    string str = "";
    vector<int> v;
    int x, prev = -1, flag = 0; 
    while(q--){
        cin >> x;
        v.push_back(x);

        if(flag == 0){
            if(prev == -1){
                cout << 1;
                prev = x;
            }
            else if(x >= prev){
                cout << 1;
                prev = x;
            }
            else if(x <= v[0]){
                cout << 1;
                flag = 1;                  
                prev = x;
            }
            else {
                cout << 0;
            }
        }
        else {
            if(x >= prev and x <= v[0]){
                cout << 1;
                prev = x;
            }
            else{
                cout << 0;
            }
        }
        
    }
    cout << endl;
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