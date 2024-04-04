#include<stdio.h>
int main()
{
    int testCase,a,b,c;
    float x,y,z;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d%d",&a,&b,&c);
        x = (b+c)/2;
        y = (a+c)/2;
        z = (a+b)/2;

        if(x>=35 && y>=35 && z>=35)
            printf("pass\n");
        else 
            printf("fail\n");
    }

    return 0;
}