//author : Zenith
// 2024-02-06 20:44:51

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, m, k; cin >> n >> m >> k;
    int arr[n], brr[m];
    vector<int> v;

    for(int i = 0; i<n; i++) {cin >> arr[i]; v.push_back(arr[i]);}
    for(int i = 0; i<m; i++) {cin >> brr[i]; v.push_back(brr[i]);}

    sort(v.begin(), v.end());
    sort(arr, arr+n);
    sort(brr, brr+m);

    if(n*2 < k || m*2 < k){
         cout << "NO\n";
         return;
    }
    set<int> s1, s2;
    for(int i = 0; i < n; i++){
        s1.insert(arr[i]);
    }
    for(int i = 0; i < m; i++){
        s2.insert(brr[i]);
    }

    vector<int> x(k+1, 0);
int cnt = 0;
    for(auto it : s1){
        if(it > k) break;
        x[it]++;
        cnt++;
    }

    if(cnt * 2 < k){
        cout << "NO\n";
        return;
    }

    cnt = 0;
    for(auto it : s2){
        if(it > k) break;
        x[it]++;
        cnt++;
    }
    if(cnt * 2 < k){
        cout << "NO\n";
        return;
    }

    for(int i = 1; i <= k; i++){
        if(x[i] == 0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

    

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