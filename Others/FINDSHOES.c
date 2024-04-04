#include<stdio.h>
int main()
{
    int testCase,friend,leftShoes,shoes;
    scanf("%d",&testCase);
    while (testCase--)
    {
        scanf("%d %d",&friend,&leftShoes);
        if(leftShoes>=friend)
        {
            leftShoes =0;
        }
        else
        {
            leftShoes = friend-leftShoes;

        }

        shoes = friend+leftShoes;
        printf("%d\n",shoes);

    }
    

    return 0;
}