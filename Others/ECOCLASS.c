#include<stdio.h>
int main()
{
    int testCase,i,j,arrLen,s[100],d[100];
    scanf("%d",&testCase);
    while (testCase--)
    {
        int count=0;
        scanf("%d",&arrLen);
        for(i=0;i<arrLen;i++);
        {
            scanf("%d",&s[i]);
            printf("s\n");
        }
        for(i=0;i<arrLen;i++);
        {
            scanf("%d",&d[i]);
            printf("d\n");
        }

        for(i=0,j=0;i<arrLen;i++,j++)
        {
            if(s[i]==d[j])
            {
                printf("count\n");
                count++;
            }
        }
        printf("%d\n",count);
        
    }
    

    return 0;
}