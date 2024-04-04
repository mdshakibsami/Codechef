#include <stdio.h>
int main()
{
    int testCase, following, follower;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d", &following, &follower);
        if (following > follower * 10)
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