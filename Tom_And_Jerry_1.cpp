#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int a,b,c,d,k;
  cin>>a>>b>>c>>d>>k;
int distance= abs(a-c) + abs(b-d) ; 
if (distance > k)
cout << "no \n";
else if (distance == k || (k> distance && (k-distance)%2==0))
cout<< "yes \n";
else 
cout << "no \n";
 }
    return 0 ;
}