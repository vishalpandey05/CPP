//author : Zenith
// 2023-12-18 22:25:24
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
void solve(){
    int n, m; cin >> n >> m;
    int a[n];
    for(int i = 0; i<n; i++) cin >> a[i];
    int ans = 0;
    sort(a, a+n);
    vector<bool> vis(n, 0);
    int i = 0, j = n-1;
    while(i < j){
        if(a[i] + a[j] > m){
            j--;
        }
        else{
            vis[i] = vis[j] = true;
            ans++;
            i++, j--;
        }
    }
    for(int i = 0; i < n; i++){
        ans += (vis[i] == false);
    }
    cout << ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}