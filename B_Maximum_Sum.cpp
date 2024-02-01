//author : Zenith
// 2023-05-23 18:18:57

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i<n; i++) cin >> arr[i];
        sort(arr, arr+n);
        int pre[n+1];
        pre[0] = 0;
        for(int i = 0; i<n; i++) pre[i+1] = pre[i] + arr[i]; 
        int ans = 0;

        for(int i = 0; i<=k; i++){
            ans = max(ans, pre[n-(k-i)] - pre[2*i]);
        }
        cout << ans << endl;
    }
}