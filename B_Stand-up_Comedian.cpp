//author : Zenith
// 2023-02-18 15:52:41

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
 int t;
 cin >> t;
 while(t--)
 {
   int a, b , c, d;
   cin >> a >> b >> c >>d;

   if (a == 0) cout << 1 << endl;
   else cout << (a + min(b,c) * 2 + min(a+1, abs(b-c)+d)) << endl;
 }
}