#include <stdio.h>
int main()
{
    int testCase, a, b, n;

    scanf("%d%d%d", &n, &a, &b);
    printf("%d %d", (n - a), (n - (a + b)));

    return 0;
}