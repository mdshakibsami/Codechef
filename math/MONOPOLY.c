#include<stdio.h>
int main()
{
    int testCase,a,b,c;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(c>a+b || a>b+c || b>a+c)
            printf("YES\n");
        else
            printf("NO\n");



    }

    return 0;
}