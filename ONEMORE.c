#include <stdio.h>
int main()
{
    int testCase, timeHave;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d", &timeHave);
        if (timeHave > 24)
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