#include<stdio.h>
int main()
{
    int testCase,boy,girl;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&girl,&boy);
        printf("%d\n",boy-girl);

    }

    return 0;
}