#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n,x;
  cin>>n>>x;
int s,r;
int w=0;
while (n--){
cin>>s>>r;
if (s<=x && r>w){
    w =r ;
}
}
 cout << r<< endl ;
 }

    return 0;
}