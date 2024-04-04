#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    scanf("%d", &testCase);
    while (testCase--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int count=0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {

                for (int j = i + 1; j < n; j++)
                {
                    if (arr[i]==arr[j])
                    {
                        count++;
                        arr[j]=-1;

                    }
                }
            }
        }
        cout<<n-count<<endl;
    }

    

    return 0;
}