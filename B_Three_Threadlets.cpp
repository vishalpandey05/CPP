//author : Zenith
// 2023-10-12 20:36:41

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int a, b, c; cin >> a >> b >> c;
    int arr[3] = {a, b , c};
    sort(arr, arr+3);
    int sum = 0;
    sum = (arr[1]/arr[0]-1) + (arr[2]/arr[0]-1);
    if(arr[1] % arr[0] != 0 || arr[2] % arr[0] != 0) cout << "NO\n";
    else{
        if(sum <= 3) cout << "YES\n";
        else cout << "NO\n";
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