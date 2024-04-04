#include<stdio.h>
int main()
{
    int testCase,fee,passengers,tickets;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d%d",&fee,&passengers,&tickets);
        if(passengers>tickets)
    
             printf("%d\n",(passengers-tickets)*fee);
        else    
            printf("%d\n",0);

    }

    return 0;
}