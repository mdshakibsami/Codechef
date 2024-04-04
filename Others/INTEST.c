#include <stdio.h>
int main()
{
    int testCase, k, n, count = 0;
    scanf("%d %d", &testCase, &k);
    while (testCase--)
    {
        scanf("%d", &n);
        if (n % k == 0)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}