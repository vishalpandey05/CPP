//author : Zenith
// 2023-02-21 12:58:22

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
 int t;
 cin >> t;
 while(t--)
 {
    int n; cin >> n;
    int a = 0, b = 0;

    for (int i = 1; n>0; i++)
    {
      if(i % 4 == 0 || i % 4 == 1)  a += min(i, n);
      else b += min(i, n);
      n -= i;
    }

    cout << a << " " << b << endl;
 }
}