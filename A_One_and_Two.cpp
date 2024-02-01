// author : Zenith
//  2023-02-19 15:00:30

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
        int arr[n];
        int z = -1, cnt2 = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 2)
                cnt2++;
        }
        if (cnt2 & 1)
            cout << -1 << endl;

        else
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == 2)
                    count++;
                if (count * 2 == (cnt2))
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
}
