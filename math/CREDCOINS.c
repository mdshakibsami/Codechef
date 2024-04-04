#include<stdio.h>
int main()
{
    int testCase,cred,bill;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&cred,&bill);
        printf("%d\n",(cred*bill)/100);


    }

    return 0;
}