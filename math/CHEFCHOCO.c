#include<stdio.h>
int main()
{
    int testCase,need,have,cost;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d%d",&need,&have,&cost);
        cost = (need-have)*cost;
        printf("%d\n",cost);

    }

    return 0;
}