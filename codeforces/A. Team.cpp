#include<iostream>
using namespace std;
int main()
{
    int x,z,i,j,n;
    int a[9999][10];
    cin>>x;
    for(i=0;i<x;++i)
    {
        for(j=0;j<3;++j)
        {
            cin>>a[i][j];
        }
    }
    n=0;
    for(i=0;i<x;++i)
    {
        z=0;
        for(j=0;j<3;++j)
        {
            if(a[i][j]==1)
                z+=1;
        }
        if(z>=2)
            n+=1;
    }
    cout<<n;
    return 0;
}
