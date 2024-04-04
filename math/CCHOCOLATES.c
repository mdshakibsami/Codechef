#include<stdio.h>
int main()
{
    int testCase,x,y,z,money;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d%d",&x,&y,&z);
        money = x*5+y*10;
        printf("%d\n",money/z);
    }

    return 0;
}