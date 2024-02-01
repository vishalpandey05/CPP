//author : Zenith
// 2023-09-03 15:12:56

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int s=2; vector<int>boxes={1,3,1,2,4,2,1};
    int n=boxes.size();
    int l=1,r=n;
    while(l<=r)
    {
        int mid=(l+r)/2;
        int cnt=1;
        int mn=INT_MAX;
        int mx=INT_MIN;
        for(auto c:boxes)
        {
            mn=min(c,mn);
            mx=max(mx,c);
            if(mx-mn>s)
            {
                cnt++;
                mn=c;
                mx=c;

            }

        }
        if(cnt<=mid)
        {
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<l<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    // cin >> t;
    while(t--){
        solve();
    }
}