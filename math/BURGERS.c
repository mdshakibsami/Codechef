#include<stdio.h>
int main()
{
    int testCase,bun,patty;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&bun,&patty);
        if(bun>patty)
        {
              printf("%d\n",patty);
        }
        else
        {
             printf("%d\n",bun);
        }

    }

    return 0;
}