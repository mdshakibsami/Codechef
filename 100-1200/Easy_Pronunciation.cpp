#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;

bool isVowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
    else return false;
}

signed main()
{

    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int tc;cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        string s; cin>>s;
        bool flag = false;
        int count = 0;

        for(auto x:s)
        {
            if(isVowel(x)) count=0;
            else 
            {
                count++;
                if(count>=4)
                {
                    flag = true;
                    break;
                }
            }
        }

        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}