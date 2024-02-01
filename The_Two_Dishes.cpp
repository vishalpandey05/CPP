#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
int n,s;
cin>>n>>s;

if (n>=s){
cout<<s<<endl;
}
else {
cout<<(2n-s)<<endl;
}
    }
return 0;
}