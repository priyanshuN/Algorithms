#include <iostream>
using namespace std;
int main()
{
    int x,i,j,n,z=0,k,b=0,s,c,t,h,q;
    int a[100][100];
    cin>>x;
    for(k=0;k<x;++k)
    {
      cin>>n;
      for(i=0;i<n;++i)
      {
          for(j=0;j<2;++j)
          {
              cin>>a[i][j];
          }
      }
      for(i=0;i<n;++i)
      {
         if(a[i][0]==a[i][1])
          z++;
      }
      for(i=0;i<n;++i)
      {
         if(a[i][0]+a[i][1]==1000000)
          b++;
      }
      int p(int c);
      {
        int s;
        if(c==1)
            return (1);
        else
            p=c*return(c-1);
       return(s);
      }
      if(t>=2&&s>=2)
      {
         t=p(z)/p(z-2)/2;
         h=p(s)/p(s-2)/2;
         cout<<t+h<<endl;
      }
      else
        cout<<0<<endl;

    }
    return 0;
}
