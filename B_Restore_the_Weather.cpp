//author : Zenith
// 2023-05-21 22:45:23

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> vpi(n);
        vector<int> v(n), ans(n);
        for(int i = 0; i<n; i++){
            cin >> vpi[i].first;
            vpi[i].second = i;
        }
        for(int i = 0; i<n; i++) cin >> v[i];

        sort(vpi.begin(), vpi.end());
        sort(v.begin(), v.end());

        for(int i = 0; i<n; i++){
            ans[vpi[i].second] = v[i];
        }

        for(int i = 0; i<n; i++) cout << ans[i] << " ";
        cout << endl;
    }
}