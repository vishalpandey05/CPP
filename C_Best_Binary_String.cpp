//author : Zenith
// 2023-05-26 14:47:17

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    string s;
    cin >> s;

    int k = 0;
    char ans[s.length()];
    for(int i = 0; i<s.length(); i++){
        if(s[i] == '?') k++;
        if(s[0] == '?') ans[0] = '0';
        else ans[0] = s[0];
    }
    for(int i = 1; i<s.length(); i++){
        if(s[i] == '?') ans[i] = ans[i-1];
        else ans[i] = s[i];
    }
    for(int i = 0; i<s.length(); i++) cout << ans[i];
    cout << endl;
    return;
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

//author : Zenith
// 2023-05-26 15:45:10

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
    
    }
}