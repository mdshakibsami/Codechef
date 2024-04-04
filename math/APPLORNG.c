#include<stdio.h>
int main()
{
    int money,apple,orange;
    
        scanf("%d%d%d",&money,&apple,&orange);
        if(money>=(apple+orange))
            printf("YES\n");
        else
            printf("NO\n");

    

    return 0;
}