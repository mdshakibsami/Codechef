#include<stdio.h>
int main()
{
    int testCase,bike,car;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&bike,&car);
        printf("%d\n",(bike*2+car*4));


    }

    return 0;
}