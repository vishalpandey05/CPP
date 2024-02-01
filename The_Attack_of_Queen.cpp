#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       double n, x, y;
        cin >> n >> x >> y;
         if (x > y)
            swap(x, y);
  
        if (x > n / 2 )
        {    
            cout << (3 * (n - 1)) + 2*(n-x)<<"\n";
        }
      else if (x<=n/2 )
        {   
            cout << (3* (n - 1)) + 2*(x-1)<< "\n";
        }

  

    }
    return 0;
}
