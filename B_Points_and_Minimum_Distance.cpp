//author : Zenith
// 2023-11-03 20:16:59

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[2*n];
    for(int i = 0; i<2*n; i++) cin >> arr[i];

    sort(arr, arr+2*n);
    cout << arr[n-1] - arr[0] + arr[2*n-1] - arr[n] << endl;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " " << arr[n+i] << endl;
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