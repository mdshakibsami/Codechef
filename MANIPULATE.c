#include <stdio.h>
int main()
{
    int testCase, x, y;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d", &x, &y);
        if (x >= y)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}