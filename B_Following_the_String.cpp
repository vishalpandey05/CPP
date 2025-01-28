//author : Zenith
// 2024-02-06 20:31:09

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];

    map<char, int> m;
    auto ch = 'a';
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            cout << ch;
            m[ch]++;
            ch++;
        }
        else{
            for(auto it : m){
                if(it.second == arr[i]){
                    cout << it.first;
                    m[it.first]++;
                    break;
                }
            }
        }
    }
    cout << endl;
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