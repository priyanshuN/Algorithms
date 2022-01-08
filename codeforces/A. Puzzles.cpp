#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int n,m,i,temp,z,j;
    cin>>n>>m;
    int a[55];
    for(i=0;i<m;++i)
    {
        cin>>a[i];
    }
    for(i=0;i<m-1;++i)
    {
        for(j=0;j<m-i-1;++j)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    z=a[0]-a[n-1];
    for(i=1;i<m-n+1;++i)
    {
        if(z>a[i]-a[i+n-1])
        {
            z=a[i]-a[i+n-1];
        }
    }
    cout<<z;
    return 0;

}
