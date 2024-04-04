#include <stdio.h>
int main()
{
    int testCase, stair, step, a,b;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d", &stair, &step);
        a = stair/step;
        b = stair%step;
        printf("%d\n",a+b);
       
    }

    return 0;
}