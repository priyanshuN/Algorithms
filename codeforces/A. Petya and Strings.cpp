#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int i,j,n,m,z,k;;
    char a[150],b[150];
    cin>>a;
    cin>>b;
    n=strlen(a);
    for(i=0;i<n;++i)
    {
        if(a[i]>=65&&a[i]<=91)
            a[i]+=32;
    }
    for(i=0;i<n;++i)
    {
        if(b[i]>=65&&b[i]<=91)
            b[i]+=32;
    }
    for(i=0;i<n;++i)
    {
       if(a[i]==b[i])
       {
           z=0;
           continue;
       }
       else
       {
           z=a[i]-b[i];
           break;
       }
    }
    if(z>0)
        cout<<1;
    else if(z<0)
        cout<<-1;
    else
        cout<<0;
    return 0;
}
