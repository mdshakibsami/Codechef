#include<stdio.h>
int main()
{
    int testCase,money;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d",&money);
        if(money>100)
        {
            printf("%d\n",money-10);
        }
        else
        {
            printf("%d\n",money);
        }

    }

    return 0;
}