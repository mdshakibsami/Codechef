#include<stdio.h>
int main()
{
    int testCase,x,y;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&x,&y);
        y = y/x;
        printf("%d\n",y);

    }

    return 0;
}