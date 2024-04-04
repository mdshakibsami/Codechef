#include <stdio.h>
int main()
{
    int submit, contest;
    scanf("%d %d", &submit, &contest);
    if (submit == 0)
    {
        printf("https://www.codechef.com/practice\n");
    }
    else if (contest == 0 && submit == 1)
    {
        printf("https://www.codechef.com/contests");
    }
    else if (contest == 1 && submit == 1)
    {
        printf("https://discuss.codechef.com");
    }

    return 0;
}