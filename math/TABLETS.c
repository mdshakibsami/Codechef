#include<stdio.h>
int main()
{
    int testCase,tablets,days;
    scanf("%d",&testCase);
    while(testCase--)
    {   
        scanf("%d%d",&days,&tablets);
        if(days*3<=tablets)
            printf("YES\n");
        else
            printf("NO\n");


    }

    return 0;
}