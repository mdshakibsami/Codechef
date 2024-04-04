#include <stdio.h>
int main()
{
    int testCase, first, second, dFirst, dSecond;
    scanf("%d", &testCase);
    while (testCase--)
    {

        scanf("%d %d", &first, &second);
        dFirst = (100 * first) / 100;
        dSecond = (200 * second) / 100;

        first = 100 - dFirst;
        second = 200 - dSecond;

        if (first < second)
        {
            printf("FIRST\n");
        }
        else if (first == second)
        {
            printf("BOTH\n");
        }
        else
        {
            printf("SECOND\n");
        }
    }

    return 0;
}