//author : Zenith
// 2023-02-22 14:34:30

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

    if(n & 1) cout << -1 << endl;
    else cout << 1 << " " << n/2 << endl;
 }
}
