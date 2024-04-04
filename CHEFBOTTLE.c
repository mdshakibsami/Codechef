#include <stdio.h>
int main()
{
    int testCase, emptybottle, capacity, tank, fillBottle;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d %d", &emptybottle, &capacity, &tank);
        fillBottle = tank / capacity;
        if (fillBottle < emptybottle)
        {
            printf("%d\n", fillBottle);
        }
        else
        {
            printf("%d\n", emptybottle);
        }
    }

    return 0;
}