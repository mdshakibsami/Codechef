#include <stdio.h>
int main()
{
    int withdrawAmount;
    float balance;

    scanf("%d %f", &withdrawAmount, &balance);

    if (withdrawAmount % 5 == 0 && withdrawAmount <= balance - 0.50) // datatype concept
    {
        balance = balance - withdrawAmount - 0.50;
        printf("%.2f\n", balance);
    }
    else
    {
        printf("%.2f\n", balance);
    }

    return 0;
}