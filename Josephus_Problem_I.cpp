//author : Zenith
// 2023-08-28 10:22:39

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    vector<int> children(n);
    for(int i = 0; i<n; i++) children[i] = i + 1;

    while(children.size() > 1){
        vector<int> survivors;
        for(int i = 0; i < children.size(); i++){
            if(i & 1){
                cout << children[i] << " ";
            }
            else {
                survivors.push_back(children[i]);
            }
        }
        if(children.size() % 2 == 0){
            children = survivors;
        }
        else{
            int first = survivors.back();
            survivors.pop_back();
            children.clear();
            children.push_back(first);

            for(auto it: survivors){
                children.push_back(it);
            }
        }
    }
    cout << children[0];
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}