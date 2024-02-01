//author : Zenith
// 2023-02-17 21:36:41

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
 int t;
 cin >> t;
 while(t--)
 {
    int n, cnt = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++) 
    {
      cin >> arr[i];
      if(arr[i] == 1) cnt++;
    }

    cout << n - cnt/2 << endl;

    
 }
}