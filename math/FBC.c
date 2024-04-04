#include<stdio.h>
int main()
{
    int testCase,k,x;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&k,&x);
        printf("%d\n",k-x);

    }

    return 0;
}