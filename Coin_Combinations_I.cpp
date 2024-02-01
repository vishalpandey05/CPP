//author : Zenith
// 2023-08-28 21:55:22

#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e9 + 7;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, x; cin >> n >> x;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    vector<int> prev(x+1, 0);

    prev[0] = 1;

    for(int i = 1; i <= x; i++){
        for(int j = 0; j<n; j++){
            if(arr[j] <= i) prev[i] += prev[i-arr[j]] % N;
        }
    }
    int totalWays = prev[x] % N;
    cout << totalWays;
}