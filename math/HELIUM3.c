#include<stdio.h>
int main()
{
    int testCase,a,b,x,y;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d%d%d",&a,&b,&x,&y);
        if((x*y)>=(a*b))
        
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}