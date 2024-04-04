#include <stdio.h>
int main()
{
    int testCase, rLevels, totalTime, minute, breakTime, count = 0;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d %d", &rLevels, &minute, &breakTime);
        if (rLevels % 3 == 0)
        {

            breakTime = ((rLevels / 3) - 1) * breakTime;
            totalTime = (rLevels * minute) + breakTime;
        }
        else
        {
            breakTime = (rLevels / 3) * breakTime;
            totalTime = (rLevels * minute) + breakTime;
        }
        printf("%d\n",totalTime);
    }

    return 0;
}