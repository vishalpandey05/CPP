#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v;
    v.push_back(n);
    int ppp = 0;
    int ans = 0;
    while (ppp == 0)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] > 0)
            {
                for (int j = 0; i < 3; i++)
                {
                    
                }
                

                v.push_back(v[i]-a);
            }
        }

        int cnt = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] <= 0)
            {
                cnt++;
            }
        }
        if (cnt == v.size())
        {
            break;
        }
    }

    return 0;
}