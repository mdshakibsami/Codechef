#include<stdio.h>
int main()
{
    int testCase,r;
    scanf("%d",&testCase);
    while(testCase--)
    {   
        scanf("%d",&r);
        r = ((r*1000)/2)/5;
        printf("%d\n",r);


    }

    return 0;
}