#include<iostream>
using namespace std;
int main()
{
    int i,j,x,z,n,m;
    char a[1005][1005];
    cin>>x;
    for(m=0;m<x;++m)
    {
        cin>>n;
        if(n%2==0)
            z=n/2;
        else
            z=(n-1)/2;
        for(i=0;i<n;++i)
        {
            for(j=0;j<n;++j)
            {
                cin>>a[i][j];
            }
            cout<<endl;
        }
        for(i=0;i<=z;i++)
        {
            for(j=0;j<=z;j++)
            {
                if(a[i][j]==a[n-1-i][j]&&a[i][j]==a[n-i-1][n-1-j]&&a[i][j]==a[i][n-1-j])
                    continue;
                else
                    break;
            }
            if(j!=z+1)
                break;
            cout<<i;

        }
        cout<<i<<j;

        if(i==z+1)
            cout<<"symmetric"<<endl;
        else
            cout<<"asymmetric"<<endl;

    }
      return 0;

}

