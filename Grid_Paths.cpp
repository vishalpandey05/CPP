//author : Zenith
// 2023-08-28 19:50:07
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e9 + 7;
 
int solve(int i, int j, vector<vector<char>> &arr, vector<vector<int>>& dp){
    if(i == 0 && j == 0 and arr[i][j] == '.') return 1;
    if(i < 0 || j < 0) return 0;
    if(i >= 0 and j >= 0 and arr[i][j] == '*') return 0;
 
    if(dp[i][j] != -1) return dp[i][j];
 
    int up = solve(i-1, j, arr, dp) % N;
    int left = solve(i, j-1, arr, dp) % N;
 
    return dp[i][j] = (up % N + left % N) % N;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<vector<char>> arr;
    vector<vector<int>> dp(n, vector<int>(n, -1));
    for(int i = 0; i<n; i++){
        vector<char> temp;
        for(int j = 0; j<n; j++){
            char x; cin >> x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }
    int ways = solve(n-1, n-1, arr, dp);
    cout << ways;
}