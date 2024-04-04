#include<stdio.h>
int main()
{
    int testCase,x;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d",&x);
        if(x>300)
            printf("%d\n",x*10);
        else
            printf("%d\n",3000);

    }

    return 0;
}