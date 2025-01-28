//author : Zenith
// 2024-04-30 15:33:13

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];

    for(int i = 0; i < n; i++){
        if(arr[arr[i]-1] == (i+1)){
            cout << 2 << endl;
            return;
        }
    }
    cout << 3 << endl;

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