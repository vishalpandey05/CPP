#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int cnt = n;

        for (int i = 0; i < n; i++){
            if(arr[i]==arr[i+1])
            cnt--;
        }
        cout<<cnt<<endl;
    }
    return 0;
}