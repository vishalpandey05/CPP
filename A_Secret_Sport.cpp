//author : Zenith
// 2023-11-07 20:07:51

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    string str;
    cin >> str;

    int a = 0, b = 0;
    // for(int i = 0; i<n; i++){
    //     if(s[i] == 'A') a++;
    //     else b++;
    // }
    if(str[n-1] == 'A') cout << "A" << endl;
    else cout << "B" << endl;
    
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