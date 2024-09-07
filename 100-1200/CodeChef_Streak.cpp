#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;

int longest(vector<int>v)
{
    int count=0,mx = 0;
    for(auto x:v)
    {

        if(x!=0)
        {
            count++;
            if(count>mx) mx = count;
            
        } 
        else count =0;
    }
    return mx;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int tc;cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<int>v(n),vv(n);
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=0;i<n;i++) cin>>vv[i];

        if(longest(v)<longest(vv)) cout<<"Addy"<<endl;
        else if(longest(v)==longest(vv)) cout<<"Draw"<<endl;
        else cout<<"Om"<<endl;


    }
}