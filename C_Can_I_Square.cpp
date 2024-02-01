//author : Zenith
// 2023-12-28 20:30:07

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    int sum = 0;
    for(int i = 0; i<n; i++) {cin >> arr[i]; sum += arr[i];}
    int val = sqrt(sum);
    if(val * val == sum) cout << "YES\n";
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