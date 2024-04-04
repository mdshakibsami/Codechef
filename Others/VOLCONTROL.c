#include <stdio.h>
#include <math.h>
int main()
{
    int testCase, x, y, button;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d", &x, &y);
        button = abs(x - y);
        printf("%d\n", button);
    }

    return 0;
}