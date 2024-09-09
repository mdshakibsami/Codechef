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
        int n,m; cin>>n>>m;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int sum=0,count=0;
        for(auto x:v)
        {
            sum+=x;
            if(sum>=m) 
            {
                count++;
                sum=0;
            }
        }
        cout<<count<<endl;
    }
}