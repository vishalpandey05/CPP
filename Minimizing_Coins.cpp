//author : Zenith
// 2023-08-28 11:10:39

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, x; cin >> n >> x;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];

    vector<int> prev(x+1, 0), curr(x+1, 0);

    for(int i = 1; i<=x; i++){
        if(i % arr[0] == 0) prev[i] = i/arr[0];
        else prev[i] = INT_MAX;
    }
    for(int i = 1; i<n; i++){
        for(int j = 0; j<=x; j++){
            int notTake = prev[j];
            int take = INT_MAX;
            if(arr[i] <= j) {
                take = 1 + curr[j-arr[i]];
            }
            curr[j] = min(take, notTake);
        }
        for(int j = 0; j <= x; j++){
            prev[j] = curr[j];
        }
    }
    if(prev[x] >= INT_MAX) cout << -1;
    else cout << prev[x];
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}