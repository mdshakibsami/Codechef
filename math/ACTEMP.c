#include<stdio.h>
int main()
{
    int testCase,a,b,c;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(b>=a && b>=c)
            printf("YES\n");
        else
            printf("No\n");


    }

    return 0;
}