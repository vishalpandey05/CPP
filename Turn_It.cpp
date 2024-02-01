#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int u,v,a,s;
  cin>>u>>v>>a>>s;
  int z= sqrt((pow(u,2)- (2*a)*s)); 
  if (z<v)
  cout << "Yes \n";
  else
  cout << "No \n";

 }
    return 0;
}