//author : Zenith
// 2023-10-05 01:18:22

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int row[4] = {-1, 0, 1, 0};
int col[4] = {0, 1, 0, -1};

bool isValid(int x, int y, vector<vector<char>>& arr, int n, int m){
    if(x < 0 || y < 0 || x >= n || y >= m || arr[x][y] == '#') return false;
    return true;
}

void dfs(int x, int y, vector<vector<char>>& arr, int n, int m, vector<vector<int>>& visited){
    visited[x][y] = 1;
    for(int i = 0; i<4; i++){
        int nrow = x + row[i];
        int nCol = y + col[i]; 

        if(isValid(nrow, nCol, arr, n, m) and !visited[nrow][nCol]){
            dfs(nrow, nCol, arr, n, m, visited);
        }
    }
}

void solve(){
    int n, m; cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    vector<vector<int>> visited(n, vector<int> (m, 0));
    int count = 0;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(arr[i][j] == '.' and visited[i][j] == 0){
                dfs(i, j, arr, n, m, visited);
                count++;
            }
        }
    }
    cout << count;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}