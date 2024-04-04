#include<stdio.h>
int main()
{
    int testCase,loaves,eDays,eats;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d%d",&loaves,&eDays,&eats);
        if(loaves<=(eDays*eats))
        
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}