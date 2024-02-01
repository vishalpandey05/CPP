//author : Zenith
// 2023-08-22 23:57:02

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    string s; cin >> s;
    int n = s.length();
    int mini = 1e9;
    int ind;
    vector<int> arr(n);

    for(int i = n-1; i >= 0; i--){
        if(s[i] - 'a' <= mini){
            mini = s[i] - 'a';
            ind = i;
        }
        arr[i] = ind;
    }
    string t = "", u = "";
    int start = 0;
    while(start < n){
        int end = arr[start];
        while(t.size() != 0 and t.back() <= s[end]){
            u += t.back();
            t.pop_back();
        }
        for(int i = start; i <= end; i++){
            t += s[i];
        }
        start = end+1;
    }
    while(t.size()){
        u += t.back();
        t.pop_back();
    }
    cout << u << endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}