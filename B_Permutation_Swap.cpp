//author : Zenith
// 2023-05-25 13:42:44

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i<n; i++) cin >> arr[i];

        int ans = 0;
        for(int i = 0; i<n; i++){
            ans = __gcd(ans, abs(arr[i] - i - 1));
        }
        cout << ans << endl;
    }
}