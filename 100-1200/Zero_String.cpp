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
        string s; cin>>s;
        int zero =0, one = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]== '0') zero++;
            else one++;
        }
        if(one<=zero) cout<<one<<endl;
        else cout<<zero+1<<endl;
    }
}