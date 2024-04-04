#include<stdio.h>
int main()
{
    int testCase,capacity,people,cost;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d%d",&capacity,&people,&cost);
        if(people>=capacity*10)
            printf("%d\n",(capacity*10*cost));
        else    
            printf("%d\n",people*cost);

    }

    return 0;
}