//author : Zenith
// 2023-11-26 20:36:05

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int a, b, c; cin >> a >> b >> c;
    int arr[] = {0, 0, 0};

    if(abs(a-b) % 2 == 0) arr[2] = 1;
    if(abs(a-c) % 2 == 0) arr[1] = 1;
    if(abs(b-c) % 2 == 0) arr[0] = 1;
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
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