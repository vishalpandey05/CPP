//author : Zenith
// 2023-06-27 09:12:26

#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool check(int arr[], int n, int h, int mid){
    int sum = mid;
    for(int i = 0; i<n-1; i++){
        if(arr[i+1]-arr[i] < mid){
            sum += (arr[i+1] - arr[i]);
        }
        else {
            sum += mid;
        }
        if (sum >= h) return true;
    }
    return false;
}

void solve(){
    int n, h; cin >> n >> h;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
        
    int low = 1, high = h;
    int ans = h;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(check(arr, n, h, mid)){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout << ans << endl;
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