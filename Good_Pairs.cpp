#include <bits/stdc++.h>
using namespace std;

void set1(int n, int a[],int i){
    for ( i=0;i<n;i++)
    cin>>a[i];
}
void set2(int n,int b[],int j)
{
for (j=0;j<n;j++)
cin>>b[j];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int cnt=0;
        int i,j;
        int a[n],b[n];
   set1(n,a,i);
   set2(n,b,j);

   while (i<j){
       if (a[i]==b[j] && a[j]==b[i])
       cnt++;
   }
cout<<cnt<<endl;
    }
    
    return 0;
}