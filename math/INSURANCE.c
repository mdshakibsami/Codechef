#include<stdio.h>
int main()
{
    int testCase,bank,cost;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&bank,&cost);
        if(cost>bank)
            printf("%d\n",bank);
        else
            printf("%d\n",cost);
        


    }

    return 0;
}