// author : Zenith
//  2023-02-08 21:16:09

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
        vector<int> arr;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.rbegin(), arr.rend());

        int i;
        for (i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
                break;
        }

        if (i % 2 == 0)
        {
            cout << "Zenyk\n";
        }
        else
        {
            cout << "Marichka\n";
        }
    }
}