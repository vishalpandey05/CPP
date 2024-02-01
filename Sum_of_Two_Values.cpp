//author : Zenith
// 2023-11-07 21:44:16

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, x; cin >> n >> x;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    vector<pair<int, int>> v;
    for(int i = 0; i<n; i++){
        v.push_back({arr[i], i+1});
    }
    sort(v.begin(), v.end());
    int i = 0, j = n-1;

    while(i < j){
        if(v[i].first + v[j].first == x) {
            cout << v[i].second << " " << v[j].second;
            return;
        }
        else if(v[i].first + v[j].first < x) i++;
        else j--;
    }
    cout << "IMPOSSIBLE";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}