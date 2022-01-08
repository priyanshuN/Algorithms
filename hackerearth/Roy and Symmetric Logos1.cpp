#include<iostream>
using namespace std;
int main()
{
    int i,j,x,k,n,m;
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
            cout<<endl;
        }
        for(i=0;i<=int((n-1)/2);i++)
        {
            for(j=0;j<=int((n-1)/2);j++)
            {
                if(a[i][j]==a[n-1-i][j]&&a[i][j]==a[n-i-1][n-1-j]&&a[i][j]==a[i][n-1-j])
                    continue;
                else
                    break;
            }
            if(j!=int((n-1)/2))
                break;
            cout<<i;

        }
        cout<<i<<j;

        if(i==int((n-1)/2))
            cout<<"symmetric"<<endl;
        else
            cout<<"asymmetric"<<endl;

    }
      return 0;

}

