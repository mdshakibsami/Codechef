#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int sum = a+b,matches=0, arr[10]={6,2,5,5,4,5,6,3,7,6};
        while (sum > 0)
        {
            matches+=arr[sum%10];
            sum /= 10;

        }
        cout<<matches<<endl;
    }

    return 0;
}