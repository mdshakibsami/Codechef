// Tom's and both of them are not at the same position

#include <stdio.h>
int main()
{
    int testCase, x, y;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d", &x, &y);
        if (y > x)
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