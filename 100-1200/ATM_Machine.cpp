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
        int n,k; cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            if(k>=x)
            {
                k-=x;
                cout<<1;
            }
            else cout<<0;
        }
        cout<<endl;
    }
}