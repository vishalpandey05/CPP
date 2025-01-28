//author : Zenith
// 2024-10-07 14:02:06

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    while(true){
        int x = n;
        bool flag = true;
        vector<int> digit(10, 0);
        while(x){
            int rem = x % 10;
            if(rem != 0) digit[rem]++;
            x /= 10;
        }
        for(int i = 1; i <= 9; i++){
            if(digit[i] == 0) continue;
            if(n % i != 0){
                flag = false;
                break;
            }
        }
        if(flag) {
            cout << n << endl;
            return;
        }
        n += 1;
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