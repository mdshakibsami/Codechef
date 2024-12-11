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
        // if(n%2==0)
        // {
        //     if(n/2==k) cout<<"YES"<<endl;
        //     else cout<<"NO"<<endl;
        // }
        // else{
        //     if(n/2==k || (n/2)+1==k) cout<<"YES"<<endl;
        //     else cout<<"NO"<<endl;
        // }

        if((n+1)/2 == k or (n/2) == k){
            cout<<"YES\n";

        }else{
            cout<<"NO\n";
        }

            
    }
}