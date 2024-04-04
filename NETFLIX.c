#include <stdio.h>
int main()
{
    int testCase, bob, alice, charlie, cost;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d %d %d", &alice, &bob, &charlie, &cost);
        if (alice + bob >= cost || bob + charlie >= cost || alice + charlie >= cost)
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
