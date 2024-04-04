#include<stdio.h>
#include<math.h>
int main()
{
    int testCase,x,y;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&x,&y);
        printf("%d\n",abs(x-y));

    }

    return 0;
}