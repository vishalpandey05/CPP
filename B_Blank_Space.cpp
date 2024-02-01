//author : Zenith
// 2023-05-25 14:36:25

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n]; for(int i =0; i<n; i++) cin >> arr[i];
        int cnt = 0, res = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] == 0) cnt++;
            else{
                res = max(res, cnt);
                cnt = 0;
            }
            res = max(res, cnt);
        }
        cout << res << endl;
    }
}