//author : Zenith
// 2023-10-05 01:56:28

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n-1];
    int sum = 0;
    for(int i = 0; i<n-1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << n*(n+1)/2 - sum;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}