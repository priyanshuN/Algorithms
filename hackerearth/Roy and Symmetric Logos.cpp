#include<iostream>
using namespace std;
int main()
{
    int i,j,x,k,z,m,b,n;
    char a[1005][1005];
    cin>>x;
    for(m=0;m<x;++m)
    {
        cin>>n;
        for(j=0;j<n;++j)
        {
            for(k=0;k<n;++k)
            {
                cin>>a[j][k];
            }
        }
        for(i=0;i<n;++i)
        {
            for(j=0;j<n/2;++j)
            {
                if(a[i][j]==a[i][n-1-j])
                    continue;
                else
                    break;
            }
            if(j!=(n-1)/2)
                break;

        }
        if(i==n-1)
            b=1;
        for(j=0;j<n;++j)
        {
            for(i=0;i<n/2;++i)
            {
                if(a[n-1-i][j]==a[i][j])
                    continue;
                else
                    break;
            }
            if(i!=(n-1)/2)
                break;
        }
        if(j==n-1)
            z=1;
        if(b==1&&z==1)
            cout<<"s";
        else
            cout<<"n";

    }
    return 0;
}
