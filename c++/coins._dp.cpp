#include<bits/stdc++.h>
using namespace std;
/*int count(int a[],int n,int m)
{
    if(m<0)
        return 0;
    else if(m==0)
        return 1;
    else if(n<=0&&m>=1)
        return 0;
    return (count(a,n-1,m)+count(a,n,m-a[n-1]));
}*/
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    //cout<<count(a,n,m);
    long int b[m+1];
    for(int i=0;i<m+1;++i)
        b[i]=0;
    b[0]=1;
    for(int i=0;i<n;++i)
    {
        for(int j=a[i];j<m+1;++j)
        {
            b[j]+=b[j-a[i]];
        }
    }
    cout<<b[m];
    return 0;
}
