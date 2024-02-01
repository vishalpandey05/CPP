#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n,p,x,y;
  cin>>n>>p>>x>>y;
  int i;
  int arr[n];
  for (i=0; i<n; i++)
  cin>>arr[i];
int time =0;
for (i=0; i<p; i++)
{
  if (arr [i] == 0 )
  time = time + x;
  else 
  time = time + y;
 }
 
 cout << time << endl;
 }
    return 0 ;
}