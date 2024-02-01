//author : Zenith
// 2023-10-09 23:46:29

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    string s; cin >> s;
    string str = "";
    char c;
    vector<int> hash(26, 0);

    for(int i = 0; i<s.size(); i++){
        hash[s[i]-'A']++;
    }
    int cnt = 0;
    for(int i = 0; i<26; i++){
        if(hash[i] & 1) cnt++;
    }
    if(cnt > 1) {
        cout << "NO SOLUTION";
    }
    else{
        if(cnt == 1){
            for(int i = 0; i<26; i++){
                if(hash[i] & 1){
                    c = (i + 'A');
                    cnt = hash[i];
                }
                else{
                    for(int j = 0; j<hash[i]/2; j++){
                        str += (i + 'A');
                    }
                }
            }
            string temp = str;
            reverse(temp.begin(), temp.end());
            for(int i = 0; i<cnt; i++) str += c;
            str += temp;
        }
        else {
            for(int i = 0; i<26; i++){
                for(int j = 0; j<hash[i]/2; j++){
                    str += (i + 'A');
                }
            }
            string temp = str;
            reverse(temp.begin(), temp.end());
            str += temp;
        }
        cout << str;
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}