#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long double x, y;
        cin >> x >> y;
        if (y <= x * 107 / 100)
        cout << "yes \n";
        else 
        cout<< "no \n";
    }

    return 0;
}
