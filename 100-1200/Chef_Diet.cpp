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
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        bool flag = false;
        int sum =0,index;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            if(k>sum) 
            {
                flag = true;
                index = i+1;
                break;
            }
            else 
            {
                sum-=k;
            }
        }

        if(flag) cout<<"NO"<<" "<<index<<endl;
        else cout<<"YES"<<endl;
    }
}