//author : Zenith
// 2023-10-06 03:58:33

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    if(n == 1) {
        cout << 1;
    }
    else if (n == 2 || n == 3){
        cout << "NO SOLUTION";
    }
    else{
        for(int i = n-1; i >= 1; i -= 2){
            cout << i << " ";
        }
        for(int i = n; i >= 1; i -= 2){
            cout << i << " ";
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}