//author : Zenith
// 2023-12-30 21:27:07

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n], pre[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    pre[0] = arr[0];
    int odd = 0;
    for(int i = 1; i<n; i++) {
        pre[i] = pre[i-1] + arr[i];
        if(pre[i] & 1){
            odd++;
        }
    }
    for(int i = 0; i < n; i++){
        cout << pre[i] << " ";
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