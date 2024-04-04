#include<stdio.h>
int main()
{
    int testCase,n,percent;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d",&n);
        percent = n/10;
        if(percent>100)
            printf("%d\n",percent);
        else
            printf("%d\n",100);


    }

    return 0;
}