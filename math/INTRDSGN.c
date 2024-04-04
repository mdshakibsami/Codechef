#include<stdio.h>
int main()
{
    int testCase,x1,x2,y1,y2;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        if(x1+y1>x2+y2)
            printf("%d\n",x2+y2);
        else    
            printf("%d\n",x1+y1);

    }

    return 0;
}