
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,r;
    cin>>t;
    while (t--)
    {
        cin>>l>>r;
        int i,x,count=0;
        for( i=l;i<=r;i++)
        {
            x = i%10;
            if(x==2 || x==3 || x == 9)
                count++;
        }
        cout<<count<<endl;
    }
    


    return 0;
}

