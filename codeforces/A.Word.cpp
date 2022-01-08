#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k=0,z=0;
    char a[103];
    cin>>a;
    n=strlen(a);
    for(i=0;i<n;++i)
    {
        if(a[i]<=91&&a[i]>=65)
        {
            k+=1;
        }
        else
            z+=1;
    }
    if(k<=z)
    {
        for(i=0;i<n;++i)
        {
            if(a[i]<=91&&a[i]>=65)
            {
                a[i]+=32;
                cout<<a[i];
            }
             else
                cout<<a[i];
        }
    }
    if(k>z)
    {
        for(i=0;i<n;++i)
        {
            if(a[i]<=123&&a[i]>=97)
            {
                a[i]-=32;
                cout<<a[i];
            }
            else
                cout<<a[i];

        }
    }
    return 0;
}
