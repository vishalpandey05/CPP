//author : Zenith
// 2023-06-22 09:13:04

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, sum = 0; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i = 0; i<n/2; i++){
        sum += (arr[n-i-1] - arr[i]);
    }
    cout << sum << endl;
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