//author : Zenith
// 2023-05-02 22:11:44

#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool search(int arr[], int x, int n){
    int s = 0, e = n-1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == x) return true;
        else if(arr[mid] > x) e = mid - 1;
        else s = mid + 1;
    }
    return false;
}

signed main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
 
    while(k--)
    {
        int x;
        cin >> x;
        bool ans = search(arr, x, n);
        if(ans) cout << "YES\n";
        else cout << "NO\n";
       
    }
}