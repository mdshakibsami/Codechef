#include <stdio.h>
int main()
{
    int testCase, chef1, chef2, CR1, CR2, trophy;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d %d %d", &chef1, &chef2, &CR1, &CR2);

        int count = 0;
        if (chef1 == CR1 || chef1 == CR2)
        {
            count++;
        }
        if (chef2 == CR1 || chef2 == CR2)
        {
            count++;
        }
        trophy = 2 - count;
        printf("%d\n", trophy);
    }

    return 0;
}