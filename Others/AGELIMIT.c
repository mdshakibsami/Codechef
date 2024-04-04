#include <stdio.h>
int main()
{
    int testCase, x, y, a;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d %d", &x, &y, &a);
        if (a >= x && a < y)
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