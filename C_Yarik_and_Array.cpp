//author : Zenith
// 2023-11-17 20:28:02

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];

    int sum = arr[0], maxi = arr[0];

    for(int i = 1; i<n; i++){
        if(abs(arr[i] - arr[i-1]) % 2 == 0 || sum < 0) {
            sum = 0;
        }
        sum += arr[i];
        maxi = max(maxi, sum);
    }
    cout << maxi << endl;
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