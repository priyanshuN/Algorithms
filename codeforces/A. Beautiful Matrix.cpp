#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int i,j,z,k,m,n;
    int a[500][500];
    for(i=0;i<5;++i)
    {
        for(j=0;j<5;++j)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<5;++i)
    {
        for(j=0;j<5;++j)
        {
            if(a[i][j]==1)
            {
                k=i;
                n=j;
                break;
            }

        }
    }
    z=2-k;
    m=2-n;
    if(z<0)
        z*=-1;

    if(m<0)
        m*=-1;
    cout<<m+z;
    return 0;
}
