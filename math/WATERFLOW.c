#include<stdio.h>
int main()
{
    int testCase,capacity,initial,perHour,hour,finally;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d%d%d",&initial,&capacity,&perHour,&hour);

        finally = initial+(perHour*hour);

        if(finally>capacity)
            printf("overFlow\n");
        else if(finally==capacity)
            printf("filled\n");
        else    
            printf("Unfilled\n");

    }

    return 0;
}