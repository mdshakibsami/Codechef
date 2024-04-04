#include<stdio.h>
int main()
{
    int testCase,bob,alice;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&bob,&alice);
        
        if((bob+alice)%2==0)
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