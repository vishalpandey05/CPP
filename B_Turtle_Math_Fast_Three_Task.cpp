//author : Zenith
// 2024-02-27 20:10:42

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    int sum = 0;
    for(int i = 0; i<n; i++) cin >> arr[i];
    map<int, int> m;
    for(auto i = 0; i < n; i++){
        m[arr[i]%3]++;
        sum += arr[i];
    }
    if(sum % 3 == 0) cout << 0 << endl;
    else if(sum % 3 == 2) cout << 1 << endl;
    else{
        if(m.find(sum % 3) != m.end()){
            cout << 1 << endl;
        }
        else cout << 2 << endl;
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