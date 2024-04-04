#include<stdio.h>
int main()
{
    int testCase,problems,approved;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&problems,&approved);
        if((approved*100)/problems>=50)
            printf("YES\n");
        else
            printf("NO\n");


    }

    return 0;
}