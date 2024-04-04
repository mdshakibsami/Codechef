#include<stdio.h>
int main()
{
    int testCase,sets,students;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&sets,&students);
        if(students>sets)
            printf("%d\n",students-sets);
        else
            printf("%d\n",0);
    }

    return 0;
}