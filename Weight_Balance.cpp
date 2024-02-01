#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int w1,w2,x1,x2,M;
  cin>>w1>>w2>>x1>>x2>>M;
int z = (w2-w1)/M;
if (z<=x2 && z>=x1)
cout <<"1 \n";
else 
cout << "0 \n";
 }
    return 0;
}