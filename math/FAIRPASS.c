#include<stdio.h>
int main()
{
    int testCase,friends,pass;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&friends,&pass);
        if(friends+1<=pass)
        
            printf("YES\n");
        
        else
            printf("NO\n");

    }

    return 0;
}