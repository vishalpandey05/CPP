//author : Zenith
// 2023-10-13 19:14:43

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void f(map<int, int> &m, int x){
    int i = 2;
    while(i*i <= x){
        while(x % i == 0){
            m[i]++;
            x /= i;
        }
        i++;
    }
    if(x > 1) m[x]++;
}

void solve(){
    int n; cin >> n;
    int arr[n];
    map<int, int> m;
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
        f(m, arr[i]);
    }
    for(auto it : m){
        if(it.second % n != 0){
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