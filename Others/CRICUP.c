#include <stdio.h>
#include <math.h>
int main()
{
    int testCase, teamA, teamB, skill;
    scanf("%d", &testCase);
    while (testCase--)
    {

        scanf("%d %d %d", &teamA, &teamB, &skill);
        if (abs(teamA - teamB) <= skill)
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