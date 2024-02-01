//author : Zenith
// 2023-05-21 20:25:04

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
 int t;
 cin >> t;
 while(t--)
 {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string str ="";
    unordered_set<string> v;
    for(int i = 0; i<s.length()-1; i++){
        str = str + s[i] + s[i+1];
        v.insert(str);
        str.erase();
    }
    cout << v.size() << endl;
 }
}