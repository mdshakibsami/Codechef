#include<stdio.h>
int main()
{
    int testCase,n,k;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&n,&k);
        printf("%d\n",n-k);

    }

    return 0;
}