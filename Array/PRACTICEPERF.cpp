#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,problem[4],count=0;
    for (i=0;i<4;i++)
    {
        cin>>problem[i];
        if(problem[i]>=10)
            count++;
    }
    cout<<count<<endl;
    

    return 0;
}