//author : Zenith
// 2024-02-27 20:23:41

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    int one = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1) one++;
    }
    if(one > 1){
        cout << "NO\n";
        return;
    }
    else if(one == 1){
        cout << "YES\n";
        return;
    }
    else{
        sort(arr, arr+n);
        if(arr[0] != arr[1]){
            cout << "YES\n";
            return;
        }
        for(int i = 1; i < n; i++){
            if(arr[i] % arr[0] < arr[1] and arr[i] % arr[0] != 0){
                cout << "YES\n";
                return;
            }
        }
        cout << "NO\n";
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