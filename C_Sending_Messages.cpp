//author : Zenith
// 2024-01-15 20:37:38

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, f, a, b; cin >> n >> f >> a >> b;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    
    int t = 0;
    for(int i = 0; i < n; i++){
        if((arr[i] - t)*a < b){
            f = f - (arr[i] - t)*a;
        }
        else{
            f -= b;
        }
        t = arr[i];
    }
    //cout << f << endl;
    if(f > 0) cout << "YES\n";
    else cout << "NO\n";
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