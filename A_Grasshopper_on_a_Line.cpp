//author : Zenith
// 2023-05-26 08:24:06

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int x, k;
        cin >> x >> k;
        if(!(x % k)){
            cout << 2 << endl;
            cout << 1 << " " << x-1 << endl;
        }
        else{
            cout << 1 << endl;
            cout << x << endl;
        }
        
    }
}