#include <stdio.h>
int main()
{
    int testCase, student, chair;
    scanf("%d", &testCase);
    for (testCase; testCase > 0; testCase--)
    {
        int needChair = 0;
        scanf("%d %d", &student, &chair);
        if (student > chair)
        {
            needChair = student - chair;
        }

        printf("%d\n", needChair);
    }

    return 0;
}