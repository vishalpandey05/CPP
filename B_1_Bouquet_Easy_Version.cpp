//author : Zenith
// 2024-07-25 15:54:53

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    int ans = 0, sum = 0, i = 0, j = 0;
    
    while(j < n){
        sum += arr[j];
        while(sum > k ||(arr[j] - arr[i] > 1)){
            sum -= arr[i++];
        }
        ans = max(ans, sum);
        j++;
    }
    cout << ans << endl;
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