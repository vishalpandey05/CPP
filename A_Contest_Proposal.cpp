//author : Zenith
// 2024-04-30 20:07:26

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n], brr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    for(int i = 0; i<n; i++) cin >> brr[i];

    sort(arr, arr+n);
    sort(brr, brr+n);
    int cnt = 0, ind = 0;
    for(int i = 0; i < n; i++){
        if(brr[i] >= arr[ind]) ind++;
        else cnt++;
    }
    cout << cnt << endl;
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