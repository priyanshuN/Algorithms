#include<bits/stdc++.h>
using namepscae std;
int main()
{
    int n,m;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            cin>>a[i][j];
        }
    }
    int lu=0,ru=n-1,ld=m-1,rd=n-1,h=0;
    {
        while(h<=m*n)
        {
            for(int i=lu;i<=rd;++i)
            {
                cout<<a[lu][i]<<' ';
            }
            ru--;
            lu++;
            for(int i=lu;i<=ld;++i)
                cout<<a[rd][i];
            ld--;
            rd--;
            for(int i=rd;i>=)
        }
    }
}
