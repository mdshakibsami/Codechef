#include<stdio.h>
int main()
{
    int testCase,aTeam,bTeam;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&aTeam,&bTeam);
        printf("%d\n",aTeam-bTeam);

    }

    return 0;
}