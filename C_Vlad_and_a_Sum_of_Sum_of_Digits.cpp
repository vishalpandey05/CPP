//author : Zenith
// 2024-02-23 19:33:24

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int S(int i){
    int res = 0;
    while(i){
        res += i % 10;
        i /= 10;
    }
    return res;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> pre(200001, 0);
    for(int i = 1; i <= 200001; i++){
        pre[i] = pre[i-1] + S(i);
    }
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        cout << pre[n] << endl;
    }
}