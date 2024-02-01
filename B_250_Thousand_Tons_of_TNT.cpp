//author : Zenith
// 2023-11-17 20:13:12

#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool check(){

}
void solve(){
    int n, sum = 0; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr+n);
    
    int ans = 0;
    int low = 1, high = n;
    while(low < high){
        int mid = low + (high-low)/2;
        if(n % mid){
            for(int i = 0; i<n/mid; i++){
                ans += (arr[n-i-1] - arr[i]);
            }
        }
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