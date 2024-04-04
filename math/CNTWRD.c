#include<stdio.h>
int main()
{
    int testCase,pages,words;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&pages,&words);
        printf("%d\n",pages*words);

    }

    return 0;
}