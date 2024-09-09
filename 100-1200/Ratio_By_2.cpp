#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int tc;cin>>tc;
    while(tc--)
    {
        int x,y;
        cin>>x>>y;
        int mn,mx;
        mn = min(x,y); mx = max(x,y);
        int dif = 2*mn -mx;
        if(dif<=0) cout<<0<<endl;
        else{
            if(dif%2==0) cout<<dif/2<<endl;
            else cout<<(dif/2)+1<<endl;
        }
    }
}