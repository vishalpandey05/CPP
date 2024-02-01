//author : Zenith
// 2024-01-30 16:30:14

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n, k; cin >> n >> k;
    int ans = n;
    for(int i = 1; i*i <= n; i++){
        if(n % i) continue;
        if(i >= k) ans = min(ans, i);
        if(n / i >= k) ans = min(ans, n/i);
    }
    cout << n/ans << endl;

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
int even, odd, r = 0;
    //  if(cnt & 1) {even = cnt+1, odd = cnt+2;}
    //  else {even = cnt + 2, odd = odd+1;}
    //  if(cnt % 2 == 0){
    //      for(int i = k; i < n; i++){
    //          cout << even << " ";
    //          even += 2;
    //          r++;
    //          if(even > n) break;
    //      }
    //      for(int i = 0; i < n-k-r; i++){
    //          cout << odd << " ";
    //          odd += 2;
    //      }
    //  }
    //  else{
    //      for(int i = 0; i < n-k-r; i++){
    //          cout << odd << " ";
    //          odd += 2;
    //      }
    //      for(int i = k; i < n; i++){
    //          cout << even << " ";
    //          even += 2;
    //          r++;
    //          if(even > n) break;
    //      }
    //  }
    //  cout << endl;