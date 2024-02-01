#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int h[n];
        for (int i = 0; i < n; i++){
            cin >> h[i];
        }
        for (int i = 0; i < n; i++){
            if (h[i] >= x)
                cout << (int ((h[i]) / x) + (h[i] % x)+1) << endl;   
             else
                cout << x << endl;
        }
    }

    return 0;
}
