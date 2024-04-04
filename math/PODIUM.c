#include<stdio.h>
int main()
{
    int testCase,winner,runnerUp;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&winner,&runnerUp);
        printf("%d",winner+runnerUp);


    }

    return 0;
}