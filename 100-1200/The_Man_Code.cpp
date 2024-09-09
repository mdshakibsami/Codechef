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
        int mx,mn;
        int x; cin>>x;
        if(x%2==0)
        {
            mx = x/2;
            if(x%3==0) mn = x/3;
            else mn = (x/3)+1;
            cout<<mx<<" "<<mn<<endl;
            
        }
        else 
        {
            mx = (x/2)+1;
            if(x%3==0) mn = x/3;
            else mn = (x/3)+1;
            cout<<mx<<" "<<mn<<endl;
        }
    }
}