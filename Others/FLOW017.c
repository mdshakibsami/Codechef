#include<stdio.h>
int main()
{
    int testCase ,a,b,c,max2;
    scanf("%d",&testCase);
    while (testCase--)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(b<a<c || c<a<b)
        {
            max2=a;
        }
        else if (a<b<c || c<b<a)
        {
            max2 = b;
        }
        else if(a<c<b || b<c<a)
        {
            max2=c;
        }
        
        printf("%d\n",max2);
        
    }
    //unsolved

    return 0;
}