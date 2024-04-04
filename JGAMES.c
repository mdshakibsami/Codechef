#include<stdio.h>
int main()
{
    int testCase,x,y;
    scanf("%d",&testCase);
    while (testCase--)
    {
        scanf("%d %d",&x,&y);
        while(y--)
       {
            x++;
       }

        if(x%2==0)
        {
            printf("Janmansh\n");
        }
        else
        {
            printf("Jay\n");
        }

        
    }
    

    return 0;
}