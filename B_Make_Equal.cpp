//author : Zenith
// 2024-02-13 20:35:51

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n], sum = 0;
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    int per = sum/n;
    int curr = 0;
    for(int i = 0; i < n; i++){
        curr += arr[i];
        if(curr < per*(i+1)) {
            cout << "NO\n";
            return;
        }
    }
    cout << "Yes\n";

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