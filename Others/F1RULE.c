#include <stdio.h>
int main()
{
    int testCase, fastest, chef, percent;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d", &fastest, &chef);

        percent = (fastest * 107) / 100;
        if (chef <= percent)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}