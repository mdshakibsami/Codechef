#include <stdio.h>
#include <string.h>
int main()
{
    int len, i, flag = 1;
    char str[100];
    printf("Enter a text: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);
}