#include <stdio.h>
int main()
{
    int testCase, chef, chefina, sum;
    scanf("%d", &testCase);

    while (testCase--)
    {
        scanf("%d %d", &chef, &chefina);
        sum = chef + chefina;
        if (sum > 6)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }

    return 0;
}