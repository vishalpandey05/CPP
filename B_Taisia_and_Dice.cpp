//author : Zenith
// 2023-02-24 14:13:08

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
 int t;
 cin >> t;
 while(t--)
 {
    int n, s, r;
    cin >> n >> s >> r;

    cout << s-r << " ";
    for(int i = 1; i<n; i++){
        cout << r/(n-i) << " ";
        r -= r/(n-i);
    }
     cout << endl;
 }
}