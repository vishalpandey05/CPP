//author : Zenith
// 2023-10-09 21:08:04

#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int N = 1e9 + 7;

void multiply(int F[2][2], int M[2][2]){
    int x = (F[0][0] * M[0][0] + F[0][1] * M[1][0])%N;
    int y = (F[0][0] * M[0][1] + F[0][1] * M[1][1])%N;
    int z = (F[1][0] * M[0][0] + F[1][1] * M[1][0])%N;
    int w = (F[1][0] * M[0][1] + F[1][1] * M[1][1])%N;

    F[0][0] = x, F[0][1] = y, F[1][0] = z, F[1][1] = w;
}

void power(int F[2][2], int n){
    if(n == 0 || n == 1) return;
    int M[2][2] = {{1, 1}, {1, 0}};

    power(F, n/2);
    multiply(F, F);

    if(n & 1){
        multiply(F, M);
    }
}

int solve(){
    int n; cin >> n;
    int F[2][2] = {{1, 1}, {1, 0}};
    if(n == 0) return 0;
    power(F, n-1);
    return (F[0][0])%N;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout << solve();
}