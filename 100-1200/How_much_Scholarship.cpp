#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int r;
    cin >> r;
    if (r <= 50)
        cout << 100 << endl;
    else if (r > 50 && r <= 100)
        cout << 50 << endl;
    else
        cout << 0 << endl;
}