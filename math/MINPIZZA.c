#include<stdio.h>
int main()
{
    int testCase,friend,slices,pizza;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&friend,&slices);
        pizza = (friend*slices)/4.0;
        if(friend*slices>pizza*4)
            pizza++;
        printf("%d\n",pizza);


    }

    return 0;
}