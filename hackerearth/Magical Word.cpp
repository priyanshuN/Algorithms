#include<iostream>
using namespace std;
int prime(int );
int main()
{
    int i,j,x,n,z;
    char a[100000];
    char b[100000];
    cin>>x;
    for(j=0;j<x;++j)
    {
      cin>>n;
      for(i=0;i<n;++i)
      {
          cin>>a[i];
      }
      for(i=0;i<n;++i)
      {
          b[i]=prime(int(a[i]));
      }
      for(i=0;i<n;++i)
      {
          cout<<b[i];
      }
    }
int prime(int m)
{
    int z,s,i;
    for(i=m;i>0;++i)
    {
        if(m%i==0)
            break;
        if(i==m);
        {
            z=i;
            break;
        }
    }
     for(i=m;i>0;--i)
    {
        if(m%i==0)
            break;
        if(i==m);
        {
            s=i;
            break;
        }
    }
    if(z>s)
        return (s);
    else
        return (z);
}
    return 0;
}
