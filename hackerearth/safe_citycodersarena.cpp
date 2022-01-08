#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,z,temp;
    cin>>n;
    int a[n+1],b[n+1],k=0,m=0;
    for (int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;++i)
    {
        for(int j=2;j<=sqrt(a[i]);++j)
        {
            if(a[i]%j==0)
            {
                k=1;
                break;
            }
        }
        if(k==0&&a[i]!=1)
        {
            b[m]==i;
            m++;
        }
    }
    for(int i=0;i<m;++i)
    {
        cout<<b[i];
    }
    if(m==0)
        cout<<-1;
    else
    {
        for(int i=0;i<n;++i)
        {
            temp=fabs(i-b[0]);z=0;
            for(int j=0;j<m-1;++j)
            {

                if(fabs(i-b[j])>fabs(i-b[j+1]))
                {
                    temp=fabs(i-b[j+1]);
                    z=b[j+1];
                }
            }

            cout<<z<<endl<<a[z]<<' ';
        }
    }
    return 0;
}
