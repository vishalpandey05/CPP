//author : Zenith
// 2023-02-20 13:26:53

#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
 int t;
 cin >> t;
 while(t--)
 {
    int n, k;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
        arr[i] += i+1;
    }
    sort(arr, arr+n);

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        k -= arr[i];
        if(k>=0) ans++;
        else break;
    }

    cout << ans << endl;

 }
}