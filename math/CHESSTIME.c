#include<stdio.h>
int main()
{
    int testCase,hour;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d",&hour);
        printf("%d\n",(hour*60)/20);


    }

    return 0;
}