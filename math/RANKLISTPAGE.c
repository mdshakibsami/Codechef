#include <stdio.h>
int main()
{
    int testCase, rank;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d", &rank);
        if (rank % 25 == 0)
            printf("%d\n", (rank / 25));
        else
            printf("%d\n", (rank / 25) + 1);
    }

    return 0;
}