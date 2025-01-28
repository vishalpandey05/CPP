//author : Zenith
// 2024-02-13 20:46:44

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];

    int i = 1;
    for(; i < n; i++){
        if(arr[i] != arr[i-1]) break;
    }
    int j = n-2;
    for(; j >= 0; j--){
        if(arr[j] != arr[j+1]) break;
    }
    if(i == n) {
        cout << 0 << endl;
        return;
    }
    else{
        if(arr[i-1] != arr[j+1]) cout << min(n-i, j+1) << endl;
        else cout << j-i+1 << endl;
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