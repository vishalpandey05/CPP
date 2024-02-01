//author : Zenith
// 2023-06-27 15:07:35

#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool check(int a[], int b[], int n, int k, int mid){
    int sum = 0, cnt = 0;
    for(int i = 0; i<n; i++){
        if(b[i] <= a[i]*mid){
            cnt += (a[i]*mid- b[i]);
        }
        if(cnt > k) return false;
    }
    return true;
}

void solve(){
    int n, k; cin >> n >> k;
    int a[n], b[n];
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<n; i++) cin >> b[i];

    int low = 0, high = 2e9, ans = 2e9;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(check(a, b, n, k, mid)){
            ans = mid;
            low = mid+1;
        }
        else high = mid-1;
    }
    cout << ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}