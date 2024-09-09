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
        int a,b,c; cin>>a>>b>>c;
        if(a>50 || b>50 || c>50)
        {
            if(a>b && a>c) cout<<'A'<<endl;
            else if(b>a && b>c) cout<<'B'<<endl;
            else if(c>a && c>b) cout<<'C'<<endl;
        }
        else cout<<"NOTA"<<endl;
    }
}