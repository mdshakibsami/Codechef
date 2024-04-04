#include<stdio.h>
int main()
{
    int testCase,students,tickets;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&students,&tickets);
        if(students>tickets)
            printf("%d\n",(students-tickets));
        else
            printf("%d\n",0);

    }

    return 0;
}