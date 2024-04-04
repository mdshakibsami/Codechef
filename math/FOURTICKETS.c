#include<stdio.h>
int main()
{
    int testCase,cost,eachCost;
    scanf("%d",&testCase);
    while(testCase--)
    {   
        scanf("%d",&eachCost);
        cost = eachCost*4; 
        if(cost<=1000)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }



    }

    return 0;
}