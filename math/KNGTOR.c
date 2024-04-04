#include<stdio.h>
int main()
{
    int testCase,n,m,sets;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&n,&m);
        sets = (n*5)+(m*7);
        printf("%d\n",sets);


    }

    return 0;
}