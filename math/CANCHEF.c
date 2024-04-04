#include<stdio.h>
int main()
{
    int testCase,patrol,distense;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&patrol,&distense);
        if((patrol*15)>=(distense*2))
            printf("YES\n");
        else
            printf("NO\n");


    }

    return 0;
}