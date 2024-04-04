#include <stdio.h>
int main()
{
    int testCase, firstCab, secondCab;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d", &firstCab, &secondCab);
        if (firstCab < secondCab)
        {
            printf("FIRST\n");
        }
        else if (firstCab == secondCab)
        {
            printf("ANY\n");
        }
        else
        {
            printf("SECOND\n");
        }
    }

    return 0;
}