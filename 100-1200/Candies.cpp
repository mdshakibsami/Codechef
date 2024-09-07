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
        for(int i=0;i<2*n;i++) 
        {
            int x; cin>>x;
            mp[x]++;
        }

        bool flag = false;
        for(auto x:mp)
        {
            if(x.second>=3)
            {
                flag = true;
                break;
            }
        }
        if(flag) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}