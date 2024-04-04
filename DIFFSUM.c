#include <stdio.h>
int main()
{
    int nFirst, nSecond;
    scanf("%d %d", &nFirst, &nSecond);

    if (nFirst > nSecond)
    {
        printf("%d\n", nFirst - nSecond);
    }
    else
    {
        printf("%d\n", nFirst + nSecond);
    }

    return 0;
}