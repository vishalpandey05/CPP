#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int l,r;
  cin>>l>>r;
  cout<< ((r-l+1)*(r-l+2))/2<<endl;
 }
    return 0;
}