#include<stdio.h>
int main()
{
    int testCase, alice,bob,charlie;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d%d",&alice,&bob,&charlie);
        if(alice<bob && alice<charlie)
            printf("alice\n");
        else if(bob<alice && bob<charlie)
            printf("bob\n");
        else 
            printf("charlie\n");
    }

    return 0;
}