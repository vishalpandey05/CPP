#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   float s,a,b,c;
     cin>>s>>a>>b>>c; 
     
float z= s*((1+(c/100))) ;
if (z>=a && z<=b)
cout<< "yes \n";
else 
cout << "no \n";
 }
    return 0;
}