#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int i,z,n,k=0,m=0,j,temp;
    int a[200];
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    /*for(i=0;i<n;++i)
    {
        cout<<a[i];
    }*/
    for(i=0;i<n-1;++i)
    {
      for(j=0;j<n-i-1;++j)
      {
          if(a[j]<a[j+1])
          {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
      }
    }
   /* cout<<endl;
    for(i=0;i<n;++i)
    {
        cout<<a[i];
    }*/
    for(i=0;i<n;++i)
    {
        k+=a[i];
    }
 /*   cout<<endl<<k<<endl;*/
    z=k;
    for(i=0;i<n;++i)
    {
        z-=a[i];
        m+=a[i];
        if(m>z)
            break;
    }
    cout<<i+1;
    return 0;

}
