//author : Zenith
// 2024-07-11 20:08:07

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    int arr[] = {a, b, c};
    for(int i = 0; i < 5; i++){
        sort(arr, arr+3);
        arr[0]++;
    }
    cout << arr[0]*arr[1]*arr[2] << endl;
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