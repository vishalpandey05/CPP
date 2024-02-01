//author : Zenith
// 2023-02-03 21:16:12

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
 int t;
 cin >> t;
 while(t--)
 {
    int n;
    cin >> n; 
    string s;
    cin >> s;

    vector <char> pre(n, 0), suff(n, 0);
    set<char> se;

    for (int i = 0; i<n; i++)
    {
       se.insert(s[i]);
       pre[i] = se.size();
    }
    se.clear();
    for (int i = n-1; i>=0; i--)
    {
       se.insert(s[i]);
       suff[i] = se.size();
    }

    int sum = 0, ans = 0;
    for (int i = 0; i<n-1; i++)
    {
        sum = pre[i] + suff [i+1];
        ans = max(ans, sum);
    }
    cout << ans << endl;
 }
}


