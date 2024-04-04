#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k, p;
        cin >> n >> x >> k >> p;
        if (x >= k)
        {

            p += k * 10;
            cout << p << endl;
        }
        else
        {
            int y = k - x;
            p += (x * 10) + (y * 5);
            if (k == n)
                p += 20;
            cout << p << endl;
        }
    }
}
