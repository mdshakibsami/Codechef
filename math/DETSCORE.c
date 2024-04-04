#include<stdio.h>
int main()
{
    int testCase,points,passTestCase,eachPoint;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&points,&passTestCase);
        eachPoint = points/10;
        printf("%d\n",(passTestCase*eachPoint));

    }

    return 0;
}