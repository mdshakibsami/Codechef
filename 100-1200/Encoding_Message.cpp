#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        string t = "abcdefghijklmnopqrstuvwxyz";
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, char> mp, mmp;
        for (int i = 0; i < 13; i++)
        {
            mp.insert(make_pair(t[i], t[26 - 1 - i]));
            mmp.insert(make_pair(t[26 - 1 - i], t[i]));
        }

        if(n%2!=0) n--;
        for (int i = 0; i < n; i += 2)
        {
            swap(s[i], s[i + 1]);
        }

        for (auto x : s)
        {
            if (x > 'm')

                cout << mmp[x];

            else
                cout << mp[x];
        }
        cout<<endl;
    }
}