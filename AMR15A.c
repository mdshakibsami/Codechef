#include <stdio.h>
int main()
{
    int soldier, weapons, even = 0, odd = 0;
    scanf("%d", &soldier);
    while (soldier--)
    {
        scanf("%d", &weapons);
        if (weapons % 2 == 0)
        {
            even += weapons;
        }
        else
        {
            odd += weapons;
        }
    }
    if (even > odd)
    {
        printf("READY FOR BATTLE\n");
    }
    else
    {
        printf("NOT READY\n");
    }

    return 0;
}