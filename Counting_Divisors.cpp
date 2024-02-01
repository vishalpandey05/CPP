//author : Zenith
// 2023-10-09 23:20:51

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // pre-computation
    vector<int> d(1000005, 0);
    for(int i = 1; i < 1000005; i++){
        for(int j = i; j < 1000005; j+=i){
            d[j]++;
        }
    }

    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        cout << d[n] << endl;
    }
}