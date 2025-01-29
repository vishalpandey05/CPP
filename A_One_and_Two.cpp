//author : Zenith
// 2025-01-29 23:41:08

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int cnt = 0;
    for(auto it : arr){
        if(it == 2) cnt++;
    }
    if(cnt & 1) cout << -1 << endl;
    else{
        cnt >>= 1;
        int i = 0;
        while(i < n){
            if(arr[i] == 2) cnt--;
            if(cnt == 0){
                cout << i+1 << endl;
                return;
            }
            i++;
        }
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