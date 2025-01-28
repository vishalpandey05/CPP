//author : Zenith
// 2024-02-17 12:41:41

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    int front = accumulate(arr, arr+n, 0ll);
    
    cout << max(front, 2*arr[n-1]) << endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}