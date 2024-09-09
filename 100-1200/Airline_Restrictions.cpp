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
      int a,b,c,d,e; cin>>a>>b>>c>>d>>e;
      int x = a+b;
      int y = b+c;
      int z = c+a;

      if((x<=d && c<=e) || (y<=d && a<=e) ||  (z<=d && b<=e)) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }
}