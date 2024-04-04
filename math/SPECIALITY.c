#include<stdio.h>
int main()
{
    int testCase,set,test,editorial;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d%d",&set,&test,&editorial);
        if(set>test && set>editorial)
            printf("setter\n");
        else if (test>set && test>editorial)
            printf("tester\n");
        else
            printf("editorialist\n");

    }

    return 0;
}