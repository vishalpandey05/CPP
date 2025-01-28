//author : Zenith
// 2024-03-28 20:43:32

#include <bits/stdc++.h>
using namespace std;
#define int long long int

vector<int> temp;
bool check(int n){
    while(n){
        int rem = n % 10;
        if(rem == 0 || rem == 1){
            n /= 10;
        } 
        else {
            return false;
        }
    }
    return true;
}

bool ok (int n){
    if(n == 1) return true;
    bool ans = false;
    for(auto it : temp){
        if(n % it == 0){
            ans |= ok(n/it);
        }
    }
    return ans;
}

void solve(){
    int n; cin >> n;
    cout << (ok(n) ? "YES\n" : "NO\n");    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for(int i = ; i < 100001; i++){
        if(check(i)){
            temp.push_back(i);
        }
    }
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}