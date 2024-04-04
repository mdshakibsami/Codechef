#include<stdio.h>
int main()
{
    int testCase,n,sum,r;
    scanf("%d",&testCase);
    while(testCase--)
    {
        sum=0;
        scanf("%d",&n);
        while (n>0)
        {
            r=n%10;
            sum+=r;
            n=n/10;
        }
        printf("%d\n",sum);
        


    }

    return 0;
}