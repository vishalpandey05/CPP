//author : Zenith
// 2023-05-26 09:22:40

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0); 
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        string s;
        cin >> s;
        int res = 1, cnt = 1;
        for(int i =0; i<s.length()-1; i++){
            if(s[i+1] == s[i]) cnt++;
            else{
                res = max(res, cnt);
                cnt = 1;
            }
            res = max(res, cnt);
        }
        cout << res+1 << endl;
    }
}