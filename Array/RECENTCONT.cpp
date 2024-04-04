#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int s = 0, l = 0;
        while (n--)
        {

            string str;
            cin >> str;
            if (str == "START38")
                s++;
            else
                l++;
        }
        cout << s << " " << l << endl;
    }

    return 0;
}