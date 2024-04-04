#include<stdio.h>
int main()
{
    int testCase,x,y,z;
    scanf("%d",&testCase);
    while(testCase--)
    {   
        scanf("%d%d%d",&x,&y,&z);
        printf("%d\n",(x+z)-y);


    }

    return 0;
}