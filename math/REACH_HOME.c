#include<stdio.h>
int main()
{
    int testCase,liters,distance;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&liters,&distance);
        if(distance<=liters*5)
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}