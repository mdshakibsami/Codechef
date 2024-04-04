#include <stdio.h>
int main()
{
    int testCase, chefAge, chefinaAge;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d", &chefAge);
        chefinaAge = chefAge - 10;
        printf("%d\n", chefinaAge);
    }

}