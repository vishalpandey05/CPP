//author : Zenith
// 2025-01-30 11:05:26

#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(__gcd(arr[i], arr[j]) <= 2) return true;
        }
    }
    return false;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        bool f = solve();
        if(f) cout << "Yes\n";
        else cout << "No\n";
    }
}