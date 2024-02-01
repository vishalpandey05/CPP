//author : Zenith
// 2024-01-04 16:29:48

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    map<int, int> m;
    int sum = 0;
    m[0] = 1;
    for(int i = 0; i < n; i++){
        arr[i] *= ((i % 2) ? -1 : 1);
        sum += arr[i];
        if(m[sum]){
            cout << "YES\n";
            return;
        }
        m[sum]++;
    }
    cout << "NO\n";
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