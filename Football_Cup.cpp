#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int x,y;
  cin>>x>>y;
  if(x==y &&((x+y)>=2))
  cout << "yes \n";
  else 
  cout << "no \n";
 }
    return 0;
}
