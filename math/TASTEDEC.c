#include<stdio.h>
int main()
{
    int testCase,x,y,chocolate,candy;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&x,&y);
        chocolate = x*2;
        candy = y*5;
        if(chocolate>candy)
        {
            printf("Chocolate\n");
        }
        else if(chocolate==candy)
        {
            printf("Either\n");
        }
        else
        {
            printf("Candy\n");
        }


    }

    return 0;
}