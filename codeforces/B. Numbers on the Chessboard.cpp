#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,n;
    cin>>n>>t;
    long long int a[n][n],k=1,z=(n*n+1)/2+1;
    for(long int i=0;i<n;++i)
    {
        for(long int j=0;j<n;++j)
        {
            if((i+j)%2==0)
            {
                a[i][j]=k++;
            }
            else
                a[i][j]=z++;
        }
    }
    for(long int i=0;i<t;++i)
    {
        long int x,y;
        cin>>x>>y;
        cout<<a[x-1][y-1]<<endl;
    }
    return 0;
}
