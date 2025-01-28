//author : Zenith
// 2024-12-19 18:41:22

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int c(int n, int nums[], int k) {
    // int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; ++i) {
        int gcd = 0;
        for (int j = i; j < n; ++j) {
            gcd = __gcd(gcd, nums[j]);
            if (gcd == k) {
                ++count;
            } else if (gcd < k) {
                break;
            }
        }
    }

    return count;
}

void solve(){
    int n = 6, k = 3;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int ans = c(n, arr, k);
    cout << ans;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}