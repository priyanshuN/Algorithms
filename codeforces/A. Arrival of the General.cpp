#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int i,k=0,z,n,temp,tep1;
    int a[101];
    cin>>n;
    z=n-1;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    temp=a[0];
    for(i=1;i<n;++i)
    {
      if(temp<a[i])
      {
          temp=a[i];
          k=i;
      }
    }
    tep1=a[n-1];
    for(i=n-2;i>=0;--i)
    {
        if(tep1>a[i])
        {
            tep1=a[i];
            z=i;
        }
    }
    if(k>z)
        cout<<k+n-z-2;
    else
        cout<<k+n-z-1;
    return 0;
}
