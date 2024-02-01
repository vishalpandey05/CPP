//author : Zenith
// 2023-10-05 12:31:11

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    set<int> st;
    for(int i = 0; i<n; i++) {cin >> arr[i]; st.insert(arr[i]);}
    cout << st.size();
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}