#include<stdio.h>
int main()
{
    int testCase,input,i,j,arr[100];
    scanf("%d",&testCase);
    while (testCase--)
    {
        int count =0;
        scanf("%d",&input);
        for(i=0;i<input;i++)
        {
            scanf("%d",&arr[i]);
            
        }
        for(j=0;j<input;j++)
        {
            if(arr[j]>=10 && arr[j]<=60)
            {   
                count++;

            }
        }
        printf("%d\n",count);
   
    }
    

    return 0;
}