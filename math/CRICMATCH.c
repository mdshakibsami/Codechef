#include<stdio.h>
int main()
{
    int testCase,runs,overs;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&runs,&overs);\
        if(runs>(overs*36))
            printf("No\n");
        else    
            printf("YES\n");
            

    }

    return 0;
}