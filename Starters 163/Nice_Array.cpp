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
        int n,k;    cin>>n>>k;
        vector<int>v(n);
        int left=0,right=0;
        for(int i=0;i<n;i++) 
        {
            int x;      cin>>x;
            int y = ceil(1.0*x/k);
            int z = floor(1.0*x/k);
            left+=z;    right+=y;

        }
        if(left<=0 && right>=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}