//author : Zenith
// 2024-05-02 20:43:10

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n-1; i++) cin >> arr[i];
    int c = 501;
    cout << c << " ";
    for(int i = 0; i < n-1; i++){
        c += arr[i];
        cout << c << " ";
    }
    cout << endl;
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