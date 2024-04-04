#include<stdio.h>
int main()
{
    int testCase,x,y;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&x,&y);
        printf("%d\n",((x*10)+(y*90)));

    }

    return 0;
}