#include<stdio.h>
int main()
{
    int testCase,candies;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d",&candies);
        if(candies%3==0)
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