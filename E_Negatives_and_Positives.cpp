//author : Zenith
// 2023-02-03 21:24:11

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
    int arr[n];
    int count = 0, sum = 0, mini = INT_MAX;
    for (int i = 0; i<n; i++) 
    {
        cin >> arr[i];
        if (arr[i] < 0) count++;
        sum += abs(arr[i]);
        mini = min(mini, abs(arr[i]));
    }
    if (count & 1) sum -= 2 * mini;

    cout << sum << endl;

 }
}