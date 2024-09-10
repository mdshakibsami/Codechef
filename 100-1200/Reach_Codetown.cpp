#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;

bool isVowel(char c)
{
    if(c=='A' || c=='E' || c=='I' || c == 'O' || c=='U') return true;
    else return false;
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int tc;cin>>tc;
    while(tc--)
    {
        string s; cin>>s; 
        if(!isVowel(s[0]) && isVowel(s[1]) && !isVowel(s[2]) && isVowel(s[3]) && !isVowel(s[4]) && isVowel(s[5]) && !isVowel(s[6]) && !isVowel(s[7])) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}