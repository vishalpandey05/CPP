//author : Zenith
// 2023-10-10 02:01:53

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void check(int arr[], int n, int mid){
    
}
void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);

    int low = 0, high = accumulate(arr, arr + n, 0);
    while(low < high){
        int mid = low + (high - low)/2;
        if(check(arr, n, mid))
    }

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}