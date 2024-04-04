#include <stdio.h>
int main()
{
    int testCase, goal, sell;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d%d", &goal, &sell);
        if (sell > goal)
        {

            sell = goal + (sell - goal) * 2;
            printf("%d\n", sell);
        }
        else
            printf("%d\n",sell);
    }

    return 0;
}