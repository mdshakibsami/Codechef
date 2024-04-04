#include<stdio.h>
int main()
{
    int testCase,time;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d",&time);
        if(time>=1 && time<=4)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }

    return 0;
}