#include<stdio.h>
int main()
{
    int testCase,sound;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d",&sound);
        if(sound>=67 && sound<=45000)
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