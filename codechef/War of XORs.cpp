#include<bits/stdc++.h>
using namespace std;
const long int M=1000008;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;++j)
    {
        int n;
        cin>>n;
        long int a[n+1],c[M],l=0,k=0;
        for(long int i=0;i<M;++i)
            c[i]=0;
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
            c[a[i]]++;
            if(a[i]%2==0)
            {
                k++;
            }
            else if(a[i]%2==1)
            {
                l++;
            }
        }
        long long int z=0;
        for(long int i=1;i<M;++i)
        {
            int x=(i+2)^i;
            z+=((c[i]-1)*c[i])/2;
            if(x==2&&i!=2)
            {
                z+=c[i]*c[i+2];
            }
            //cout<<z<<' '<<endl;
        }
        long long int h=(l*(l-1))/2+(k*(k-1))/2-z;
        cout<<h<<endl;
    }
    return 0;
}
