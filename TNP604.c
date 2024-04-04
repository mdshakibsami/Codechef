#include<stdio.h>
int main()
{
    int x1,x2,v1,v2,min,max;

    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);


    if(x1<x2)
    {
        if(v1>v2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    else
    {
         if(v1<v2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }




    return 0;
}