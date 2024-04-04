#include <stdio.h>
int main()
{
    int testCase, question, correct, passMark, mark, incorrect;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d %d", &question, &correct, &passMark);

        incorrect = question - correct;
        mark = (correct * 3) - incorrect;
        if (mark >= passMark)
        {
            printf("PASS\n");
        }
        else
        {
            printf("FAIL\n");
        }
    }

    return 0;
}