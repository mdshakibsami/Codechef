#include <stdio.h>
int main()
{
    int testCase, n;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d", &n);
        if (n < 10)
        {
            printf("Thanks for helping Chef!\n");
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}