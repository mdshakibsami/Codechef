#include<stdio.h>
int main()
{
    int testCase,n,ld,fd;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d",&n);
        ld=n%10;
        while (n>0)
        {
            fd=n%10;
            n/=10;
        }
        printf("%d\n",ld+fd);

    }

    return 0;
}