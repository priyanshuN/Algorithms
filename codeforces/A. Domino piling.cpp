#include<iostream>
using namespace std;
int main()
{
    int  n,m,z,k;
    cin>>n>>m;
    z=n/2;
    k=m/2;
    if(n>m)
    {
        if(m%2==0)
        {
            cout<<n*k;
        }
        else
        {
            cout<<n*k+z;
        }
    }
    else
    {
      if(n%2==0)
        {
            cout<<m*z;
        }
        else
        {
            cout<<m*z+k;
        }
    }
    return 0;
}
