#include<stdio.h>
int main()
{
    int testCase,a,b,c;
    scanf("%d",&testCase);
    while(testCase--)
    {   
        scanf("%d%d%d",&a,&b,&c);
        if((a+b)==c || (a+c)==b || (b+c)==a)
            printf("YES\n");
        else 
            printf("NO\n");


    }

    return 0;
}