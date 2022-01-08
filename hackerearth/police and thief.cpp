#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m,q,h,v=0,x,z;
    cin>>n>>x;
    char a[n+2][n+2];int b[n],c[n];
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;++i)
    {
        q=0;h=0;
        for(j=0;j<n;++j)
        {
            if(a[i][j]=='T')
            {
                b[q]=j;
                q++;
            }
            if(a[i][j]=='P')
            {
                c[h]=j;
                h++;
            }
        }
        z=0;
        for(k=0;k<h;++k)
        {
            while(z<q)
            {
                if(b[z]-c[k]<=x&&b[z]-c[k]>=-x)
                {
                    v+=1;
                    z++;
                    break;
                }
            }
        }
    }
    cout<<v;
    return 0;
}
