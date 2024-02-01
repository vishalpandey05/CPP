//author : Zenith
// 2023-12-16 21:28:29

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];

    int sum = 0;
    int i = 0, j = 0;
    while(j < n/2){
        sum += arr[j++];
    }
    int ans = sum, indStart = 0, indEnd = n-1;
    while(i < n){
        sum -= arr[i++];
        if(j >= n){
            j %= n;
            sum += arr[j++];
        }
        if(ans > sum){
            indStart = i;
            ans = sum;
            indEnd = j;
        }
    }
    vector<int> v(n);
    for(int i = n/2; i < n; i++){
        if(indStart >= n) indStart %= n;
        v[i] = arr[indStart++];
    }
    for(int i = 0; i < n/2; i++){
        if(intEnd >= n) indEnd %= n;
        v[i] = arr[indEnd++];
    }
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