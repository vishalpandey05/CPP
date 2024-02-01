//author : Zenith
// 2023-05-21 23:22:06

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(int n, int arr[]){
    int miniOdd = INT_MAX;
    int miniEven = INT_MAX;

    for(int i = 0; i<n; i++){
        cin >> arr[i];
        if(arr[i] & 1) miniOdd = min(miniOdd, arr[i]);
        else miniEven = min(miniEven, arr[i]);
    }
    if(miniOdd == INT_MAX || miniEven == INT_MAX){
        cout << "YES\n";
        return;
    }
    if(miniOdd > miniEven) cout << "NO\n";
    else cout << "YES\n";
    return;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        
        solve(n, arr);
    }
}