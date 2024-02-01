#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int a,b,c ;
  cin>>a>>b>>c;
  int z= max (a,b);
  cout<< (max (z,c)+ z)<<endl;
 }
    return 0;
}