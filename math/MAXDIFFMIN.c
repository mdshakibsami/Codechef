#include<stdio.h>
int main()
{
    int testCase,a,b,c,max,min;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>=b && a>=c)
            max=a;
        else if (b>=a && b>=c)
            max=b;
        else 
            max = c;
        if(a<=b && a<=c)
            min=a;
        else if(b<=a && b<=c)
            min = b;
        else
            min = c;
    
        printf("%d\n",max-min);
    }

    return 0;
}