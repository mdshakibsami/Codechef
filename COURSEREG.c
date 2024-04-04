#include <stdio.h>
int main()
{
    int testCase, takeEroll, sets, registered, freeSets;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d %d", &takeEroll, &sets, &registered);
        freeSets = sets - registered;
        if (freeSets >= takeEroll)
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