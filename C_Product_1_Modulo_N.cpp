//author : Zenith
// 2023-06-27 08:31:11

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;

    vector<int> ans;
    int product = 1;
    for(int i = 1; i<n; i++){
        if(__gcd(n, i) == 1){
            ans.push_back(i);
            product = (product*i)%n;
        }
    }
    if(product != 1){
        ans.pop_back();
    }
    cout << ans.size() << endl;
    for(auto& it : ans){
        cout << it << " ";
    }
    cout << endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}