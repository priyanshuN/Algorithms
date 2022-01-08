#include<iostream>
using namespace std;
int main()
{
    int x,k,i,j,n,m,z,b;
    int a[30][30];
    cin>>x;
    for(b=0;b<x;++b)
    {
        z=0;
        cin>>k;
        for(i=0;i<k;++i)
        {
            for(j=0;j<k;++j)
            {
                cin>>a[i][j];
            }
        }
        for(i=0;i<k;++i)
        {
            for(j=0;j<k;++j)
            {
                for(m=i;m<k;++m)
                {
                    for(n=j;n<k;++n)
                    {
                        if(a[i][j]>a[m][n])
                            z+=1;
                    }
                }
            }
        }
        cout<<z<<endl;
    }
    return 0;
}
