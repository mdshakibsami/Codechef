#include<stdio.h>
int main()
{
    int testCase,x,y,invest;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            invest=x-y;
            printf("%d\n",invest);
        }

    }


    return 0;
}