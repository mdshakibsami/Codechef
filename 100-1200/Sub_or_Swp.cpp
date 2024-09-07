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
        int x, y;
        cin >> x >> y;
        while (x != 0)
        {
            if(x>y) swap(x,y);
            else 
            {
                int temp = x;
                x = (y%x);
                y = temp;
            }
        }
        cout<<y<<endl;
    }
}