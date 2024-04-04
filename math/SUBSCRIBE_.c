#include<stdio.h>
int main()
{
    int testCase,friends,cost,group;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&friends,&cost);
        group = friends/6;
        if(group*6<friends)
            group++;
        printf("%d\n",group*cost);
    }

    return 0;
}