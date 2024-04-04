#include <stdio.h>
int main()
{
    int testCase, totalPage, pagePerDay, day;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d %d", &totalPage, &pagePerDay, &day);
        if (pagePerDay * day >= totalPage)
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