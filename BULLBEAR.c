#include <stdio.h>
int main()
{
    int testCase, buy, sell;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d", &buy, &sell);
        if (sell > buy)
        {
            printf("PROFIT\n");
        }
        else if (sell == buy)
        {
            printf("NETURAL\n");
        }
        else
        {
            printf("LOSS\n");
        }
    }

    return 0;
}