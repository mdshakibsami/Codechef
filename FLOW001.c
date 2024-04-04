#include <stdio.h>
int main()
{
    int testCase, sum, a, b;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d", &a, &b);
        sum = a + b;
        printf("%d\n", sum);
    }

    return 0;
}