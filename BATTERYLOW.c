
#include <stdio.h>
int main()
{
    int testCase, batteryCharge;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d", &batteryCharge);
        if (batteryCharge <= 15)
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