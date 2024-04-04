#include<stdio.h>
int main()
{
    int testCase,money;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d",&money);
        printf("%d\n",money%10);

    }

    return 0;
}