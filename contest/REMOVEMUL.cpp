#include <bits/stdc++.h>
using namespace std;
//worng
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, sum = 0, sum1 = 0;
        cin >> n >> m;
        int arr[m];
        for (int i = 1; i <= m; i++)
        {

            cin >> arr[i];
            sum += arr[i];
        }

        for (int i = 1; i <= n; i++)
        {

            sum1 += i;
        }
        cout << sum1 - sum << endl;
    }
}
