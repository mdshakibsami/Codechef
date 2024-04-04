#include<stdio.h>
int main()
{
    /*Chef has a rectangular plate of length 
Ncm and width 
Mcm. He wants to make a/// wireframe around ///the plate. The wireframe costs 

X rupees per cm.*/
    int testCase,n,m,cost;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d%d",&n,&m,&cost);
        printf("%d\n",(2*(n+m)*cost));

    }

    return 0;
}