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
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << ((n / 2) * (n / 2)) * 2 << endl;
        }
        else
        {
            cout << ((n / 2) * ((n / 2)+1) )* 2 << endl;
        }
    }
}