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
        int n; cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            mp[x]++;
            
        }

        int mx = 0;
        for(auto x:mp)
        {
            if(x.second>mx) mx = x.second;
        }
        cout<<n-mx<<endl;
    }
}