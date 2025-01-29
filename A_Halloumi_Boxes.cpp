//author : Zenith
// 2025-01-29 23:11:24

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    bool flag = true;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i-1]) flag = false;
    }
    if(flag == true || (flag == false and k >= 2)) cout << "YES\n";
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