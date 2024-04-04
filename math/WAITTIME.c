#include<stdio.h>
int main()
{
    int testCase,k,x,days;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&k,&x);
        days = k*7;
        printf("%d\n",days-x);


    }

    return 0;
}