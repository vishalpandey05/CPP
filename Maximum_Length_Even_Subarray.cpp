#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n;
  cin>>n;
  if (n%4==0 || n%4 ==3 )
  cout<<n<<endl;
  else if (n%4==1)
  cout << (n-1)<<endl;
  else if (n%4==2)
  cout << (n-2)<<endl;
 }
    return 0;
}