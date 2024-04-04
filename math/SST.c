#include<stdio.h>
int main()
{
    int testCase,a,b;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&a,&b);
        a=a*10;
        b=b*5;
        if(a>b)
            printf("first\n");
        else if(a==b)
            printf("any\n");
        else
            printf("second\n");


    }

    return 0;
}