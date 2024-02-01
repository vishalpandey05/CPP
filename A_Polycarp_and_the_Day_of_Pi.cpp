// author : Zenith
//  2023-02-23 18:36:49

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    string str = "314159265358979323846264338327";
    int N = 30;
    string s;
    cin >> s;
    int n = s.length();

    for (int i = 0; i < min(n, N); i++)
    {
        if (s[i] != str[i])
        {
            cout << i << endl;
            return;
        }
    }
    cout << min(n, N) << endl;
    return;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}