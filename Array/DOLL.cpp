#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k;
    cin>> t;
    while (t--)
    {
        cin>> n>>k;
        int i,count=0,arr[n];
        for(i=0;i<n;i++)
        {
           
           cin>>arr[i];
            if(arr[i]>k)
                count++;
        }
        cout<<count<<endl;
    }
    

    return 0;
}