//author : Zenith
// 2023-03-01 01:09:32

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(string a, string b){
     if(a[0] == b[0]){
        cout << "YES\n" << a[0] << "*\n";
        return;
    }
    else if (a[a.size()-1] == b[b.size()-1]){
        cout << "YES\n" << "*" << a[a.size()-1] << endl;
        return;
    }

    for (int i = 1; i<a.size(); i++){
        for(int j = 1; j<b.size();j++){
            if((a[i-1] == b[j-1]) && (a[i] == b[j])){
                cout << "YES\n" << "*" << a[i-1] << a[i] << "*\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

signed main()
{
 int t;
 cin >> t;
 while(t--)
 {
    string a, b; 
    cin >> a >> b;
    solve(a, b);
    
 }
}