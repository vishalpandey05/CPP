#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, m;
        cin >> a >> b >> m;
        if (a < b)
        {
            if (abs(b - a) <= abs(m - b + a))
                cout << abs(b - a) << endl;
            else
                cout << abs(m - b + a) << endl;
        }
        else 
        if (abs(b-a)<abs(m-a+b))
        cout<< abs(b-a)<< endl;
        else 
        cout<< abs (m-a+b)<<endl;
    }
    return 0;
}