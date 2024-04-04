#include<stdio.h>
#include<math.h>
int main()
{
    int testCase,x1,y1,x2,y2,distance;
    scanf("%d",&testCase);
    while (testCase--)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

        distance = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        printf("%d\n",distance);

        
    }
     //unsolved

    return 0;
}