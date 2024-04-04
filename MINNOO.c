#include <stdio.h>
int main()
{
    int testCase, n, count = 0, i = 0;
    int binary[1000];
    scanf("%d", &testCase);
    while (testCase--)
    {
        
        scanf("%d", &n);
        int total_1=0;

        for (i = 0; i < n; i++)
        {

            if (count == 0)
            {
                binary[i] = 0;
                count = 1;
            }
            else
            {
                binary[i] = 1;
                count = 0;
            }
        }

        for (i = 0; i < n; i++)
        {
            if(binary[i]==1)
            {
                total_1++;

            }
        }
        printf("%d\n",total_1);
    }

    return 0;
}