#include<stdio.h>
int main()
{
    int testCase,sell,profit;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&sell,&profit);
        sell = (sell*10)/100;
        printf("%d\n",sell+profit);
    }

    return 0;
}