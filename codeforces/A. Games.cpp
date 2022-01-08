#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int i,j,x,n,k=0,z=0;
    int a[100][100];
    cin>>x;
    for(i=0;i<x;++i)
    {
        for(j=0;j<2;++j)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<x;++i)
    {
        for(n=i+1;n<x;++n)
        {
            if(a[i][0]==a[n][1])
                k+=1;
        }
    }
    for(i=0;i<x;++i)
    {
        for(n=i+1;n<x;++n)
        {
            if(a[i][1]==a[n][0])
                z+=1;
        }
    }
    cout<<k+z;
    return 0;
}
