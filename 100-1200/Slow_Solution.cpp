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
        int t,n,sum; cin>>t>>n>>sum;

        int a = sum/n;
        int b = sum%n;
       
       if(a<t) cout<<(a*n*n)+(b*b)<<endl;
       else cout<<(t*n*n)<<endl;
    }
}