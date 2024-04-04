#include<stdio.h>
int main()
{
    int testCase,n;
    scanf("%d",&testCase);
    while (testCase--)
    {
        scanf("%d",&n);
        if(n%4==0)
            printf("Good\n");
        else
            printf("not good\n");
     
    }
    

    return 0;
}