//author : Zenith
// 2023-06-08 19:57:59

#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool check(int mid, vector<int>& arr){
    vector<int> ds;
    int val = arr[0]-mid;
    ds.push_back(val);
    for(int i = 1; i<arr.size(); i++){
        if(abs(val - arr[i]) > mid){
            val = arr[i] - mid;
            ds.push_back(val);
        }
    }
    return (ds.size() <= 3);
}

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++) cin >> arr[i];
    sort(arr.rbegin(), arr.rend());
    int low = 0, high = 1e9, ans = 1e9;

    while(low <= high){
        int mid = low + (high-low)/2;
        if(check(mid, arr)){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
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