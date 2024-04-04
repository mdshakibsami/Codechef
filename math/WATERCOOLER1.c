#include<stdio.h>
int main()
{
    int testCase,rent,purchase,months;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d%d",&rent,&purchase,&months);
        if(purchase>rent*months)
            printf("YES\n");
        else 
            printf("NO\n");

    }

    return 0;
}