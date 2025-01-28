//author : Zenith
// 2024-02-23 20:12:48

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];

    int i = 0, j = n -1;
    while(i < n){
        if(arr[i] == 1) break;
        i++;
    }
    while(j >= 0){
        if(arr[j] == 1) break;
        j--;
    }
    int cnt = 0;
    for(int k = i+1; k < j and k < n; k++){
        if(arr[k] == 0) cnt++;
    }
    cout << cnt << endl;
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