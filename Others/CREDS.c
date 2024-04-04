#include <stdio.h>
int main()
{
    int testCase, RTP, Non_RTP, Audit;
    scanf("%d", &testCase);
    while (testCase--)
    {
        int credit = 0;
        scanf("%d %d %d", &RTP, &Audit, &Non_RTP);
        credit = (RTP * 4) + (Audit * 2);
        printf("%d\n", credit);
    }

    return 0;
}