 //author : Zenith
 // 2024-05-18 09:26:15
 
 #include <bits/stdc++.h>
 using namespace std;
 #define int long long int
 
 void solve(){
    int a, b, c; cin >> a >> b >> c;
    if(a+b+c == 0) cout << 0 << endl;
    else if((a+b+c) & 1) cout << -1 << endl;
    else{
        if(a+b < c) cout << a+b << endl;
        else cout << (a+b+c)/2 << endl;
    }
 }
 signed main(){
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     int t;
     cin >> t;
     while(t--){
         solve();
     }
 }