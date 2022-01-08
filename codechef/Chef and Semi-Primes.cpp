#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[201];
    for(int i=0;i<201;++i)
    {
        a[i]=0;
    }
    int b[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197,199};
    for(int i=0;i<46;++i)
        a[b[i]]=1;
    /*for(int i=0;i<201;++i)
    {
        cout<<i<<' '<<a[i]<<endl;
    }*/
    int c[201];
    for(int i=0;i<201;++i)
    {
        c[i]=0;
    }
    for(int i=0;i<45;++i)
    {
        for(int j=i+1;j<46&&b[i]*b[j]<200;++j)
        {
            c[b[i]*b[j]]=1;
        }
    }
    /*for(int i=0;i<201;++i)
    {
        cout<<i<<' '<<c[i]<<endl;
    }*/
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int n,k=0;
        cin>>n;
        for(int j=2;j<=n/2;++j)
        {
            if(c[j]==1&&c[n-j]==1)
            {
                k=1;
                cout<<"YES"<<endl;
                break;
            }

        }
        if(k==0)
            cout<<"NO"<<endl;
    }
    return 0;
}
