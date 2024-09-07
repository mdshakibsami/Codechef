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
        int a,b,x; cin>>a>>b>>x;
        if(x*x>=a*b) cout<<0<<endl;
        else
        {
            int sq = x*x;
            int count = 0;
            if(a<=sq || b<=sq) cout<<1<<endl;
            else cout<<2<<endl;
        
        }
    }
}
//problem statement: https://www.codechef.com/problems/P2149?tab=statement