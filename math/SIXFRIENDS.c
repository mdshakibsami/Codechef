#include<stdio.h>
int main()
{
    int testCase,doubleRoom,trippleRome;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&doubleRoom,&trippleRome);
        if(doubleRoom*3>trippleRome*2)
            printf("%d\n",trippleRome*2);
        else
            printf("%d\n",doubleRoom*3);

    }

    return 0;
}