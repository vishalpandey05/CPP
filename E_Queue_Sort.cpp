//author : Zenith
// 2023-11-21 21:00:21

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    int ans = 0, min_ind = 0, mini = 1e9;

    for(int i = 0; i < n; i++){
        if(arr[i] < mini){
            mini = arr[i];
            min_ind = i;
        }
    }
    for(int i = min_ind; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            cout << -1 << endl;
            return;
        }
    }
    cout << min_ind << endl;
    
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