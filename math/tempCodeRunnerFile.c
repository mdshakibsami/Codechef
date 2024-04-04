#include<stdio.h>
#include<string.h>
int main()
{
    int len,i,flag=0;
    char str[100];
    scanf("%s",str);
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]!=str[len-1-i])
        {
            flag=1;
            break;
        }
        
    }
    if(flag==1)
        printf("%s is a palindrome\n",str);
    else
        printf("%s is not a palindrome",str);

    return 0;
}