#include<stdio.h>
int main()
{
    int testCase,a,b,c;
    scanf("%d",&testCase);
    while(testCase--)
    {   
        scanf("%d%d%d",&a,&b,&c);
        if(((a+b)/2.0)>c)
            printf("yes\n");
        else
            printf("no\n");

    }

    return 0;
}