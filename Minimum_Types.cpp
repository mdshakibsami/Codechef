#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;

void solve()
{
    int n,k;    cin>>n>>k;
    vector<int>v(n),ans(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        ans[i]=x*v[i];
    }
    sort(ans.rbegin(),ans.rend());


    int sum=0,count;
    for(int i=0;i<n;i++)
    {
        
        sum+=ans[i];
        if(sum>=k)
        {
            count=i+1;
            break;
        }
    }

    cout<<(sum>=k?count:-1)<<endl;
}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int tc;cin>>tc;
    while(tc--)
    {
        solve();
    }
}