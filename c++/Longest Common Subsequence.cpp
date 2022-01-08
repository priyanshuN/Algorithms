#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int z=a.size(),k=b.size();
    int c[z+1][k+1];
    for(int i=0;i<=k;++i)
        c[0][i]=0;
    for(int i=0;i<=z;++i)
        c[i][0]=0;
    for(int i=1;i<=z;++i)
    {
        for(int j=1;j<=k;++j)
        {
            if(a[i-1]==b[j-1])
                c[i][j]=c[i-1][j-1]+1;
            else
                c[i][j]=max(c[i-1][j],c[i][j-1]);
        }
    }
    cout<<c[z][k]<<endl;
    char d[max(z,k)];
    //string d(max(z,k));
    int i=z,j=k,m=0;
    while(i>0&&j>0)
    {
        if(a[i-1]==b[j-1])
        {
            d[m++]=a[i-1];
            i--,j--;
        }
        else
        {
            if(c[i-1][j]>c[i][j-1])
                i--;
            else
                j--;
        }
    }
    for(int i=m-1;i>=0;--i)
        cout<<d[i];
    return 0;
}
