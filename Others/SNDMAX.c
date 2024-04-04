#include <stdio.h>
int main()
{
    int testCase, a, b, c, max1, max2, max3;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a > b && a > c)
        {
            if (b > c)
            {

                max2 = b;
                printf("%d\n", b);
            }
            else
            {
                max2 = c;
                printf("%d\n", c);
            }
        }

        else if (b > a && b > c)
        {

            if (a > c)
            {
                max2 = a;
                printf("%d\n", a);
            }
            else
            {
                max2 = c;
                printf("%d\n", c);
            }
        }
        else
        {
            if (a > b)
            {
                max2 = a;
                printf("%d\n", a);
            }
            else
            {
                max2 = b;
                printf("%d\n", b);
            }
        }
    }

    return 0;
}