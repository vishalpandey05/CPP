//author : Zenith
// 2023-10-05 22:58:01

#include <bits/stdc++.h>
using namespace std;
#define int long long int

// int isValid(int i, int j, int k){
//     int ans = 0;
//     if(i-1 >= 0 and j - 2 >= 0) ans++;
//     if(i-1 >= 0 and j + 2 < k) ans++;
//     if(i+1 < k and j - 2 >= 0) ans++;
//     if(i+1 < k and j + 2 < k) ans++;
//     if(i-2 >= 0 and j - 2 >= 0) ans++;
//     if(i-2 >= 0 and j + 2 < k) ans++;
//     if(i+2 < k and j - 2 >= 0) ans++;
//     if(i+2 < k and j + 2 < k) ans++;

//     return ans;
// }
 
// void solve(){
//     int n; cin >> n;
//     int res = 0;
//     cout << 0 << endl;
//     for(int i = 2; i<=n; i++){
//         for(int j = 0; j < i; j++){
//             for(int k = 0; k<i; k++){
//                 res += (n-1-isValid(j, k, n));
//             }
//         }
//         cout << res/2 << endl;
//     }
    
// }
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 1; i<=n; i++){
        cout << ((i*i)*(i*i-1)/2 - 4 * (i - 1)*(i - 2)) << endl;
    }
}