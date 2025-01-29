//author : Zenith
// 2025-01-29 23:49:15

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    set<int> st;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        st.insert(arr[i]);
    }
    if(st.size() == 1) cout << "NO\n";
    else{
        sort(arr, arr+n);
        cout << "YES\n";
        cout << arr[n-1] << " ";
        for(int i = 0; i < n-1; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
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