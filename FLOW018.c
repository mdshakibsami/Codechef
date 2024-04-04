#include <stdio.h>
int main()
{
    int number, testCase, factorial;
    scanf("%d", &testCase);
    while (testCase--)
    {
        factorial = 1;

        scanf("%d", &number);
        while (number)
        {
            factorial *= number;
            number--;
        }
        printf("%d\n", factorial);
    }

    return 0;
}