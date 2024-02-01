//author : Zenith
// 2023-02-03 20:16:27

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
    int z = 0;
    int x =0, y =0;
    for (int i = 0; i< n; i++)
    {
        if (s[i] == 'U') y++;
        else if (s[i] == 'D') y--;
        else if (s[i] == 'L') x--;
        else if (s[i] == 'R') x++;
    if ((x == 1) && (y == 1)) 
    {
        z = 1;
        break;
    }
    }
    if (z == 1) cout << "yes\n";
    else cout << "no\n";
 }
}