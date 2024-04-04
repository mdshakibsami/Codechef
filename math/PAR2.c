#include<stdio.h>
int main()
{
    int testCase,chocolates;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d",&chocolates);
        if(chocolates%2==0)
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