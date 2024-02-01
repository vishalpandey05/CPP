//author : Zenith
// 2023-10-13 17:12:45

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n; cin >> n;
    vector<int> s1, s2;
    if(n % 4 == 0){
        for(int i = 1; i<=n/4; i++){
            s1.push_back(i);
        }
        for(int i = n; i > 3*n/4; i--){
            s1.push_back(i);
        }
        for(int i = n/4 + 1; i<=3*n/4; i++){
            s2.push_back(i);
        }
        cout << "YES" << endl;
        cout << s1.size() << endl;
        for(int i = 0; i<s1.size(); i++) cout << s1[i] << " ";
        cout << endl;
        cout << s2.size() << endl;
        for(int i = 0; i<s2.size(); i++) cout << s2[i] << " ";
    }
    else if(n % 4 == 3){
        int z = n/4;
        for(int i = 0; i<=z; i++){
            if(i == 0) s1.push_back(4 * i + 3);
            else {
                s1.push_back(4*i);
                s1.push_back(4*i + 3);
            }
        }
        for(int i = 0; i <= z; i++){
            s2.push_back(4*i + 1);
            s2.push_back(4*i + 2);
        }
        cout << "YES" << endl;
        cout << s1.size() << endl;
        for(int i = 0; i<s1.size(); i++) cout << s1[i] << " ";
        cout << endl;
        cout << s2.size() << endl;
        for(int i = 0; i<s2.size(); i++) cout << s2[i] << " ";
    }
    else {
        cout << "NO"<< endl;
    }
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}