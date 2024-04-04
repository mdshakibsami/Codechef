#include<bits/stdc++.h>
using namespace  std;
 
int main()
{
    int testCase, problems, i, count;
    cin>>testCase;
    while (testCase--)
    {

        count = 0;
        cin>>problems;
         int difficulty[problems];
         // better to declear a arry after knowing the size
        for (i = 0; i < problems; i++)
        {
           cin>>difficulty[i];
            if (difficulty[i] >= 1000)
                count++;
        }
        cout<<count<<endl;
    }

    return 0;
}