// author : Zenith
//  2023-02-03 20:27:47

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int z = n;

       for(int i = 0; i<n/2; i++)
       {
            if ((s[i] == '1' && s[n-i-1] == '0')|| (s[i] == '0' && s[n-i-1] == '1')) z -=2;
            else break;
       }
       cout << z << endl;
    }
}