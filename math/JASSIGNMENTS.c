#include<stdio.h>
int main()
{
    int testCase,time;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d",&time);
        if(time+3>10)
            printf("NO\n");
        else 
            printf("YES\n");


    }

    return 0;
}