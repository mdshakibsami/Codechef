#include<stdio.h>
int main()
{
    int testCase,time,duration;
    scanf("%d",&testCase);
    while(testCase--)
    {

        scanf("%d%d",&time,&duration);
        printf("%d\n",time/(duration*3));

    }

    return 0;
}