#include<stdio.h>
int main()
{
    int testCase,children,have,candy,pack;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&children,&have);
        if(children>have)
        {
            candy = children-have;
            pack=candy/4;
            if(candy%4!=0)
            pack++;
            
            printf("%d\n",pack);
            
        }
        else
            printf("%d",0);


    }

    return 0;
}