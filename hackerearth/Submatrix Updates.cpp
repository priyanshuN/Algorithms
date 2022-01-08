#include <iostream>
using namespace std;
int main()
{
    int n,m,k,r,s,c,d,i,j,l;
    int a[100][100];
    cin>>n>>m>>k;
    for(i=1;i<=n;++n)
    {
        for(j=1;j<=m;++j)
        {
            cin>>a[i][j];
        }
    }
    for(l=0;l<k;++l)
    {
        cin>>r>>s>>c>>d;
        for(i=r;i<=r+c;++i)
        {
            for(j=s;j<=s+c;++j)
            {
                a[i][j]+=d;
            }
        }
        for(i=1;i<=n;++n)
        {
            for(j=1;j<=m;++j)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
